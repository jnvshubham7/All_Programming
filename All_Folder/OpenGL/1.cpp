// Write a program to design a house. (Use both convex & concave

// polygons). 

#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>

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

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("House");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


