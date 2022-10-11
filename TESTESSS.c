#include <windows.h>
#include <GL/glut.h>
GLfloat angle = 45.0f;
int refreshmill = 1;

void timer(int value)
{
    glutPostRedisplay();
    glutTimerFunc(refreshmill,timer,0);

}
void animation(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0f,0.0f,0.0f,1.0f);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.5, -0.5);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(0.5, -0.5);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(0.0, 0.5);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.5f,0.0f,0.0f);
    glRotatef(angle,0.0f,0.0f,1.0f);
    glPopMatrix();
    glutSwapBuffers();
    angle+= 0.5;

    glEnd();
    glFlush();

}
void reshape(GLsizei width, GLsizei height)
{

    if (height == 0) height = 1;
    GLfloat aspect = (GLfloat)width / (GLfloat)height;
    glViewport(0,0,width,height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(width >= height)
    {
        gluOrtho2D (-1.0*aspect, 1.0*aspect, -1.0,1.0);
    }
    else
    {
        gluOrtho2D(-1.0,1.0, -1.0 / aspect, 1.0 / aspect);
    }

}
int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(640,320);
    glutCreateWindow("First Triangle");


    //start();
    glutDisplayFunc(animation);
    glutReshapeFunc(reshape);
    glutTimerFunc(0,timer,0);
    glutMainLoop();
    return 0;
}
