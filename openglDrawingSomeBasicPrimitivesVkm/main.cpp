#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display();
void reshape(int ,int);

void init()
{
    glClearColor(0.0,0.0,0.0,1.0);
}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);

    glutInitWindowPosition(200,100);
    glutInitWindowSize(500,500);



    glutCreateWindow("titlevkm");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    init();
    glutMainLoop();
}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    //glPointSize(10.0);

    glBegin(GL_POLYGON);

    glVertex2f(5,5);
    glVertex2f(-5,5);
    glVertex2f(-5,-5);
    glVertex2f(5,-5);

    glEnd();

    glFlush();
}

void reshape(int width,int height)
{
    glViewport(0,0,width,height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10,10,-10,10);
    glMatrixMode(GL_MODELVIEW);
}
