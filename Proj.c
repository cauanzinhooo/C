#include <windows.h>
#include <GL/glut.h>

void start(void);
void animation(void);

int main(int argc, char** argv)
{
	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
	glutInitwWindowPosition(100,100);
	glutInitWindowSize(640,320);
	glutCreateWindow("First Triangle");
	
	start();
	glutDisplayFunc(animation);
	glutMainLoop();
}
void start(){
	glClearColor(0,0,0,0);
}
void animation()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glFlush();
}


