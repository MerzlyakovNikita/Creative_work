#include "Graph.h"

int main(int argc, char* argv[])
{
	setlocale(0, "ru");

	glutInit(&argc, argv);

	graph.setGraph();
	graph.kommivoyazher();

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(WinW, WinH);
	glutCreateWindow("Задача коммивояжера");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();

	return 0;
}
