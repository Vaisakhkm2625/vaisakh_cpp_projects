#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
//#include <math.h>

void display();
void reshape(int ,int);
void timer(int);


void init()
{
    glClearColor(0.0,0.0,0.0,1.0);
    glEnable(GL_DEPTH_TEST);
}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode( GLUT_RGB | GLUT_DOUBLE |GLUT_DEPTH );

    glutInitWindowPosition(200,100);
    glutInitWindowSize(500,500);



    glutCreateWindow("titlevkm");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(1000,timer,0);

    init();
    glutMainLoop();
}
float x_position=0.0;
//float dir=0.15;
float thita=0;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glLoadIdentity();

    //glShadeModel(GL_FLAT); //defalt GL_SMOOTH
    //glPointSize(10.0);
    //glTranslatef(0,5.0 * sin(thita),0);
    glTranslatef(0,0.0,-15.0);
    glRotatef(thita,1,1,1);

    glBegin(GL_QUADS);
        glColor3f(1.0,0.0,0.0);
        //front
        glColor3f(1.0,0.0,0.0);
        glVertex3f( -1.0,1.0,1.0);
        glVertex3f( -1.0,-1.0,1.0);
        glVertex3f( 1.0,-1.0,1.0);
        glVertex3f( 1.0,1.0,1.0);
        //back
        glColor3f(0.0,0.0,1.0);
        glVertex3f(1.0,1.0,-1.0);
        glVertex3f(1.0,-1.0,-1.0);
        glVertex3f(-1.0,-1.0,-1.0);
        glVertex3f(-1.0,1.0,-1.0);

        //right
        glColor3f(0.0,1.0,0.0);
        glVertex3f(1.0,1.0,1.0);
        glVertex3f(1.0,-1.0,1.0);
        glVertex3f(1.0,-1.0,-1.0);
        glVertex3f(1.0,1.0,-1.0);

        //left
                glColor3f(1.0,1.0,0.0);
        glVertex3f(-1.0,1.0,-1.0);
        glVertex3f(-1.0,-1.0,-1.0);
        glVertex3f(-1.0,-1.0,1.0);
        glVertex3f(-1.0,1.0,1.0);

        //


    glEnd();

    glutSwapBuffers();
    //glFlush();
}

void reshape(int width,int height)
{
    glViewport(0,0,width,height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
  //  gluOrtho2D(-10,10,-10,10);
    gluPerspective(60,width/height,2,50);
    glMatrixMode(GL_MODELVIEW);
}

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);

    thita+=3.14;
    if(thita>360)
    {
        thita=0;
    }

/*    if(x_position<8 && x_position>=-10)
        x_position+=dir;
    else{
        dir*=-1;
        x_position+=dir;
    }   */
}
