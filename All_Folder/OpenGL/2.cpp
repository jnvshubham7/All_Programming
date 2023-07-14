// Write a program to display a 2D object with options to support zooming, panning, and moving operations (by redefining viewport).


#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <iostream>

using namespace std;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.0, 0.5);
        glVertex2f(0.5, 0.5);
        glVertex2f(0.5, 0.0);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.0, 0.5);
        glVertex2f(0.5, 0.5);
        glVertex2f(0.25, 1.0);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.0, 0.5);
        glVertex2f(-0.5, 0.5);
        glVertex2f(-0.5, 0.0);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 0.0);
        glVertex2f(-0.5, 0.0);
        glVertex2f(-0.5, 0.5);
        glVertex2f(-0.25, 1.0);
    glEnd();
    glFlush();
}

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

void reshape(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
        case 'z':
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
            break;
        case 'p':
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            gluOrtho2D(-2.0, 2.0, -2.0, 2.0);
            break;
        case 'm':
            glMatrixMode(GL_PROJECTION);
            glLoadIdentity();
            gluOrtho2D(-0.5, 0.5, -0.5, 0.5);
            break;
        case 'q':
            exit(0);
            break;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("2D Object");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}







