#include <studio.h>
#include <stdlib.h>
#include <GL/glut.h>

void dislpay()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glutSwapBuffers();
}

void init()
{
	glClearColor(0.3,0.3,0.3,0);
	gluOrtho2D(0,1024,512,0);
}

int main(int argc, char* argv[])
{
	glutInit(&arg, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutCreateWindow("Youtube - 3Dsage");
	Init();
	glutDislpayFunc(display);
	glutMainLooo();
