#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <glut.h>
using namespace std;

int r = 0;
int WinW = 1280;
int WinH = 960;

struct VertexCoords // структура с координатами вершин
{
	int x;
	int y;
};
VertexCoords VCs[20];

class Graph
{
private:
	int max_size = 20;
	vector<int> vertexList;
	vector<vector<int>> adjMatrix;
public:
	Graph(int size); // конструктор
	~Graph() {} // деструктор
	bool GraphIsFull(); // проверить граф на полноту
	void insertVertex(const int& t); // добавить вершину
	int getVertexIndex(const int& t); // получить индекс вершины
	void insertEdge(const int& v1, const int& v2, int weight);  // добавить ребро между вершинами
	void printMatrix(); // вывод матрицы смежности
	int kommivoyazher(); // метод ветвей и границ для решения задачи коммивояжера
	void setGraph(); // создание графа
	void drawGraph(); // отрисовка графа
};
Graph graph(10);

void drawCircle(int x, int y, int r); // отрисовка круга
void drawVertex(int n); // отрисовка вершины
void drawLine(int x1, int y1, int x2, int y2, int w); // отрисовка ребра
void drawWeight(int x, int y, int i); // отрисовка веса ребра
void reshape(int w, int h); // функция для изменения размеров окна в случае, если много вершин
void setCoords(int i, int n); // установка координат вершин
void display();


Graph::Graph(int size)
{
	max_size = size;
	adjMatrix = vector<vector<int>>(size, vector<int>(size));
	for (int i = 0; i < max_size; ++i)
	{
		for (int j = 0; j < max_size; ++j)
		{
			adjMatrix[i][j] = 0;
		}
	}
}

bool Graph::GraphIsFull()
{
	return vertexList.size() == max_size;
}

void Graph::insertVertex(const int& vert)
{
	if (GraphIsFull())
	{
		cout << "Нельзя добавить вершину!" << endl;
		return;
	}
	vertexList.push_back(vert);
}

int Graph::getVertexIndex(const int& vert)
{
	for (int i = 0; i < vertexList.size(); ++i)
	{
		if (vertexList[i] == vert)
			return i;
	}
	return -1;
}

void Graph::insertEdge(const int& vert1, const int& vert2, int weight)
{
	if (getVertexIndex(vert1) != -1)
	{
		int pos_vertex1 = getVertexIndex(vert1);
		int pos_vertex2 = getVertexIndex(vert2);
		if (adjMatrix[pos_vertex1][pos_vertex2] != 0 && adjMatrix[pos_vertex2][pos_vertex1] != 0)
		{
			cout << "Ребро уже есть" << endl;
			return;
		}
		else
		{
			adjMatrix[pos_vertex1][pos_vertex2] = weight;
			adjMatrix[pos_vertex2][pos_vertex1] = weight;
		}
	}
	else
	{
		cout << "Обеих вершин (или одной из них) нету в графе" << endl;
		return;
	}
}

void Graph::printMatrix()
{
	if (GraphIsFull())
	{
		cout << "Матрица смежности:" << endl;
		cout << endl << "  ";
		for (int i = 0; i < vertexList.size(); i++)
		{
			cout << setw(4) << i + 1;
		}
		cout << endl;
		for (int i = 0; i < vertexList.size(); ++i)
		{
			cout << i + 1 << " ";
			for (int j = 0; j < vertexList.size(); ++j)
				cout << setw(4) << adjMatrix[i][j];
			cout << endl;
		}
	}
	else
		cout << "Граф пуст" << endl;
	cout << endl;
}

int Graph::kommivoyazher()
{
	int size = vertexList.size();
	// 1. Построение матрицы смежности
	vector<vector<int>> adj_matrix(size, vector<int>(size));
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j)
				adj_matrix[i][j] = 1000; // на пересечении одной и той же вершины
			else
				adj_matrix[i][j] = adjMatrix[i][j];
		}
	}

	// 2. Поиск минимумов строк
	int* di = new int[size];
	for (int i = 0; i < size; i++)
	{
		int min = 10000;
		for (int j = 0; j < size; j++)
		{
			if (adj_matrix[i][j] < min)
				min = adj_matrix[i][j];
		}
		di[i] = min;
	}

	// 3. Редукция строк
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			adj_matrix[i][j] -= di[i];
		}
	}

	cout << "Матрица после редукции строк:" << endl;
	cout << endl << "  ";
	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << i + 1;
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << " ";
		for (int j = 0; j < size; j++)
		{
			cout << setw(4) << adj_matrix[i][j];
		}
		cout << endl;
	}
	cout << endl;

	// 4. Поиск минимумов столбцов
	int* dj = new int[size];
	for (int i = 0; i < size; i++)
	{
		int min = 10000;
		for (int j = 0; j < size; j++)
		{
			if (adj_matrix[j][i] < min)
				min = adj_matrix[j][i];
		}
		dj[i] = min;
	}

	// 5. Редукция столбцов
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			adj_matrix[j][i] -= dj[i];
		}
	}

	cout << "Матрица после редукции столбцов:" << endl;
	cout << endl << "  ";
	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << i + 1;
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << " ";
		for (int j = 0; j < size; j++)
		{
			cout << setw(4) << adj_matrix[i][j];
		}
		cout << endl;
	}
	cout << endl;

	delete[] di;
	delete[] dj;

	// 6. Вычисление оценок нулевых клеток
	vector<vector<int>> temp_matrix = adj_matrix;
	int* di_ = new int[size];
	for (int i = 0; i < size; i++)
	{
		int counter = 0;
		int min_notNull_i = 10000;
		for (int j = 0; j < size; j++)
		{
			if (temp_matrix[i][j] == 0)
				counter++;
		}
		for (int j = 0; j < size; j++)
		{
			if (counter < 2)
			{
				if (temp_matrix[i][j] != 0 && temp_matrix[i][j] < min_notNull_i)
				{
					min_notNull_i = temp_matrix[i][j];
				}
			}
			else
				min_notNull_i = 0;
		}
		di_[i] = min_notNull_i;
	}

	int* dj_ = new int[size];
	for (int i = 0; i < size; i++)
	{
		int counter = 0;
		int min_notNull_j = 10000;
		for (int j = 0; j < size; j++)
		{
			if (temp_matrix[j][i] == 0)
			{
				counter++;
			}
		}
		for (int j = 0; j < size; j++)
		{
			if (counter < 2)
			{
				if (temp_matrix[j][i] != 0 && temp_matrix[j][i] < min_notNull_j)
				{
					min_notNull_j = temp_matrix[j][i];
				}
			}
			else
				min_notNull_j = 0;
		}
		dj_[i] = min_notNull_j;
	}

	// Подставляем в клетки с нулями сумму минимумов по строке и столбцу
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (temp_matrix[i][j] == 0)
				temp_matrix[i][j] = di_[i] + dj_[j];
		}
	}

	cout << "Матрица после оценки нулевых значений:" << endl;
	cout << endl << "  ";
	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << i + 1;
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << " ";
		for (int j = 0; j < size; j++)
		{
			cout << setw(4) << temp_matrix[i][j];
		}
		cout << endl;
	}
	cout << endl;

	delete[] di_;
	delete[] dj_;

	// 7. Выбор нулевого элемента с наибольшей оценкой
	vector<vector<int>> result(size, vector<int>(size));
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			result[i][j] = 0;
		}
	}
	int counter = 0;
	int iw = -1;
	int jw = -1;
	while (counter != size)
	{
		int max_null = 0;
		for (int i = 0; i < size; i++)
		{
			if (i != iw)
				for (int j = 0; j < size; j++)
				{
					if (j != jw)
						if (temp_matrix[i][j] < 1000 && adj_matrix[i][j] == 0)
						{
							if (temp_matrix[i][j] > max_null)
								max_null = temp_matrix[i][j];
						}
				}
		}
		for (int i = 0; i < size; i++)
		{
			if (i != iw)
				for (int j = 0; j < size; j++)
				{
					if (j != jw)
						if (temp_matrix[i][j] == max_null && adj_matrix[i][j] == 0)
						{
							result[i][j] = max_null;
							temp_matrix[j][i] = 1000;
							iw = i;
							jw = j;
							counter++;
						}
				}
		}
	}

	cout << "Итоговый вид матрицы:" << endl;
	cout << endl << "  ";
	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << i + 1;
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << " ";
		for (int j = 0; j < size; j++)
		{
			cout << setw(4) << result[i][j];
		}
		cout << endl;
	}
	cout << endl;

	cout << "Кратчайший путь: ";
	vector<int> min_way;
	counter = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (result[i][j])
			{
				cout << i + 1 << "->" << j + 1 << "->";
				min_way.push_back(i);
				min_way.push_back(j);
				counter += 2;
			}
		}
	}
	int first = min_way[0];
	min_way.push_back(first);
	cout << first + 1 << endl;

	int sum = 0;
	for (int i = 0; i < counter; i++)
	{
		sum += adjMatrix[min_way[i]][min_way[i + 1]];
	}
	cout << "\nДлина крайтчайшего пути = " << sum << endl;
	return 0;
}

void drawCircle(int x, int y, int r)
{
	double t, X, Y;
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		t = i * 3.1415926 / 180;
		X = cos(t) * r + x;
		Y = sin(t) * r + y;
		glVertex2f(X, Y);
	}
	glEnd();

	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; i++)
	{
		t = i * 3.1415926 / 180;
		X = cos(t) * r + x;
		Y = sin(t) * r + y;
		glVertex2f(X, Y);
	}
	glEnd();
}

void drawWeight(int x, int y, int weight)
{
	GLvoid* font = GLUT_BITMAP_9_BY_15;
	string s = to_string(weight);
	glRasterPos2i(x - 5, y - 5);
	for (int j = 0; j < s.length(); j++)
		glutBitmapCharacter(font, s[j]);
}

void drawVertex(int size)
{
	for (int i = 0; i < size; i++)
	{
		drawCircle(VCs[i].x, VCs[i].y, r);
		drawWeight(VCs[i].x, VCs[i].y, i + 1);
	}
}

void drawLine(int x1, int y1, int x2, int y2, int weight)
{
	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_LINES);
	glVertex2i(x1, y1);
	glVertex2i(x2, y2);
	glEnd();
	drawWeight((x1 + x2) / 2 + 10, (y1 + y2) / 2 + 10, weight);
}

void setCoords(int i, int size)
{
	int X = WinW / 2;
	int Y = WinH / 2;
	int R;
	if (WinW > WinH)
	{
		r = WinH / (size * 3);
		R = WinH / 2 - r - 10;
	}
	else
	{
		r = WinH / (size * 3);
		R = WinW / 2 - r - 10;
	}
	double t = i * 3.141592 * 2 / size;
	VCs[i].x = R * cos(t) + X;
	VCs[i].y = R * sin(t) + Y;
}

void Graph::drawGraph()
{
	int size = vertexList.size();
	for (int i = 0; i < size; i++)
	{
		setCoords(i, size);
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			int weight = adjMatrix[i][j];
			if (weight != 0)
				drawLine(VCs[i].x, VCs[i].y, VCs[j].x, VCs[j].y, weight);
		}
	}
	drawVertex(size);
}

void Graph::setGraph()
{
	int vertex_amount, weight;
	cout << "Введите количество вершин: ";
	cin >> vertex_amount;
	cout << endl;
	graph.max_size = vertex_amount;
	graph.adjMatrix = vector<vector<int>>(vertex_amount, vector<int>(vertex_amount));

	for (int i = 1; i <= vertex_amount; i++)
	{
		graph.insertVertex(i);
	}
	for (int i = 1; i <= vertex_amount; i++)
	{
		for (int j = i + 1; j <= vertex_amount; j++)
		{
			cout << "Введите вес между ребром " << i << " и " << j << ": ";
			cin >> weight;
			cout << endl;
			graph.insertEdge(i, j, weight);
		}
	}
	cout << endl;
	graph.printMatrix();
}

void reshape(int w, int h)
{
	WinW = w;
	WinH = h;
	glViewport(0, 0, (GLsizei)WinW, (GLsizei)WinH);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, (GLdouble)WinW, 0, (GLdouble)WinH);
	glutPostRedisplay();
}

void display()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, WinW, 0, WinH);
	glViewport(0, 0, WinW, WinH);
	glClearColor(0, 1, 1, 0);
	glClear(GL_COLOR_BUFFER_BIT);

	graph.drawGraph();
	glutSwapBuffers();
}