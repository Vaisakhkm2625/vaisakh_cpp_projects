#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display();
void reshape(int ,int);
void timer(int);

void init()
{
    glClearColor(0.0,0.0,0.0,1.0);
}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode( GLUT_RGB | GLUT_DOUBLE );

    glutInitWindowPosition(200,100);
    glutInitWindowSize(500,500);



    glutCreateWindow("titlevkm");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(1000,timer,0);

    init();
    glutMainLoop();
}
float x_position=-10;
float dir=0.15;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    //glPointSize(10.0);

    glBegin(GL_POLYGON);


    glVertex2f(x_position + 2.0 , 1.0);
    glVertex2f(x_position , 1.0 );
    glVertex2f(x_position , -1.0);
    glVertex2f(x_position + 2.0 , -1.0);





//    glVertex2f(5,5);
//    glVertex2f(-5,5);
//    glVertex2f(-5,-5);
//    glVertex2f(5,-5);


    glEnd();
    glutSwapBuffers();
    //glFlush();
}

void reshape(int width,int height)
{
    glViewport(0,0,width,height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10,10,-10,10);
    glMatrixMode(GL_MODELVIEW);
}

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);


    if(x_position<8 && x_position>=-10)
        x_position+=dir;
    else{
        dir*=-1;
        x_position+=dir;
    }
}
