#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>
#define PI 3.1416
int windowWidth=500; int windowHeight=500;
bool flagScale=false;

double boat_move=0;

double sun_move=0;


void boat(){

glPushMatrix();
         glBegin(GL_QUADS);
         glColor3f(0.0,0.0,0.0);
    glVertex2f(8.5,13);
    glVertex2f(12.5,13);
    glVertex2f(13.5,14);
    glVertex2f(7.5,14);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_TRIANGLES);
         glColor3f(1.0,0.0,0.0);
    glVertex2f(11,14);
    glVertex2f(11,16);
    glVertex2f(8.5,14);

     glEnd();
     glPopMatrix();





}

void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius){
int i;
int triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
GLfloat twicePi = 2.0f * PI;


glBegin(GL_TRIANGLE_FAN);
glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
}




void display ();
void reshape(int,int);
void init()
{
    glClearColor (0.0,0.0,0.0,0.0);

}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    //WATER
    glPushMatrix();
         glBegin(GL_POLYGON);
         glColor3f(0.0,0.5,1.0);
    glVertex2f(0,0);
    glVertex2f(33,0);
    glVertex2f(33,16);
    glVertex2f(0,16);

     glEnd();
     glPopMatrix();

    // SKY
    glPushMatrix();
         glBegin(GL_POLYGON);
         glColor3f(0,191,255);
    glVertex2f(0,16);
    glVertex2f(33,16);
    glVertex2f(33,25);
    glVertex2f(0,25);

     glEnd();
     glPopMatrix();


   glPushMatrix();
   glTranslatef(boat_move,0,0);
   boat();
   glPopMatrix();


   // 1ST LAND
    glPushMatrix();
         glBegin(GL_POLYGON);
         glColor3f(0.5,1.0,0.0);
    glVertex2f(0,0);
    glVertex2f(14,0);
    glVertex2f(18,11);
    glVertex2f(0,11);

     glEnd();
     glPopMatrix();

    //2ND LAND
    glPushMatrix();
         glBegin(GL_POLYGON);
         glColor3f(0.5,1.0,0.0);
    glVertex2f(20,0);
    glVertex2f(33,0);
    glVertex2f(33,11);
    glVertex2f(24,11);

     glEnd();
     glPopMatrix();


    //1ST HOUSE
    glPushMatrix();
         glBegin(GL_QUADS);
         glColor3f(1.0,0.0,0.0);
    glVertex2f(1,1);
    glVertex2f(4,1);
    glVertex2f(4,4);
    glVertex2f(1,4);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_QUADS);
         glColor3f(0.0,0.0,1.0);
    glVertex2f(4,1);
    glVertex2f(7,1);
    glVertex2f(7,4);
    glVertex2f(4,4);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_QUADS);
         glColor3f(0.0,0.0,0.0);
    glVertex2f(2,2);
    glVertex2f(3,2);
    glVertex2f(3,3);
    glVertex2f(2,3);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_QUADS);
         glColor3f(0.0,0.0,0.0);
    glVertex2f(5.5,1);
    glVertex2f(6.5,1);
    glVertex2f(6.5,3);
    glVertex2f(5.5,3);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_TRIANGLES);
         glColor3f(0.0,0.0,1.0);
    glVertex2f(1,4);
    glVertex2f(4,4);
    glVertex2f(2.5,6);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_POLYGON);
         glColor3f(1.0,0.0,0.0);
    glVertex2f(4,4);
    glVertex2f(7,4);
    glVertex2f(5.5,6);
    glVertex2f(2.5,6);

     glEnd();
     glPopMatrix();



   // 2ND HOUSE
    glPushMatrix();
         glBegin(GL_QUADS);
         glColor3f(0.0,0.0,1.0);
    glVertex2f(7,6);
    glVertex2f(10,6);
    glVertex2f(10,9);
    glVertex2f(7,9);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_QUADS);
         glColor3f(1.0,0.0,0.0);
    glVertex2f(10,6);
    glVertex2f(13,6);
    glVertex2f(13,9);
    glVertex2f(10,9);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_QUADS);
         glColor3f(0.0,0.0,0.0);
    glVertex2f(8,7);
    glVertex2f(9,7);
    glVertex2f(9,8);
    glVertex2f(8,8);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_POLYGON);
         glColor3f(0.0,0.0,0.0);
    glVertex2f(11.5,6);
    glVertex2f(12.5,6);
    glVertex2f(12.5,8);
    glVertex2f(11.5,8);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_TRIANGLES);
         glColor3f(1.0,0.0,0.0);
    glVertex2f(7,9);
    glVertex2f(10,9);
    glVertex2f(8.5,11);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_POLYGON);
         glColor3f(0.0,0.0,1.0);
    glVertex2f(10,9);
    glVertex2f(13,9);
    glVertex2f(11.5,11);
    glVertex2f(8.5,11);

     glEnd();
     glPopMatrix();


    //3RD HOUSE
    glPushMatrix();
         glBegin(GL_QUADS);
         glColor3f(1.0,0.0,0.0);
    glVertex2f(24,2);
    glVertex2f(27,2);
    glVertex2f(27,5);
    glVertex2f(24,5);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_QUADS);
         glColor3f(0.0,0.0,1.0);
    glVertex2f(27,2);
    glVertex2f(30,2);
    glVertex2f(30,5);
    glVertex2f(27,5);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_QUADS);
         glColor3f(0.0,0.0,0.0);
    glVertex2f(25,3);
    glVertex2f(26,3);
    glVertex2f(26,4);
    glVertex2f(25,4);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_POLYGON);
         glColor3f(0.0,0.0,0.0);
    glVertex2f(28.5,2);
    glVertex2f(29.5,2);
    glVertex2f(29.5,4);
    glVertex2f(28.5,4);

     glEnd();
     glPopMatrix();


      glPushMatrix();
         glBegin(GL_TRIANGLES);
         glColor3f(0.0,0.0,1.0);
    glVertex2f(24,5);
    glVertex2f(27,5);
    glVertex2f(25.5,7);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_POLYGON);
         glColor3f(1.0,0.0,0.0);
    glVertex2f(27,5);
    glVertex2f(30,5);
    glVertex2f(28.5,7);
    glVertex2f(25.5,7);

     glEnd();
     glPopMatrix();


    //1ST TREE
    glPushMatrix();
         glBegin(GL_QUADS);
         glColor3f(0.1,0.0,0.0);
    glVertex2f(2,8);
    glVertex2f(3,8);
    glVertex2f(3,9);
    glVertex2f(2,9);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_TRIANGLES);
         glColor3f(0.0,1.0,0.0);
    glVertex2f(1,9);
    glVertex2f(4,9);
    glVertex2f(2.5,12);

     glEnd();
     glPopMatrix();


    //2ND TREE
    glPushMatrix();
         glBegin(GL_QUADS);
         glColor3f(0.1,0.0,0.0);
    glVertex2f(5,8);
    glVertex2f(6,8);
    glVertex2f(6,9);
    glVertex2f(5,9);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_TRIANGLES);
         glColor3f(0.0,1.0,0.0);
    glVertex2f(4,9);
    glVertex2f(7,9);
    glVertex2f(5.5,12);

     glEnd();
     glPopMatrix();


  //  3RD TREE
    glPushMatrix();
         glBegin(GL_QUADS);
         glColor3f(0.1,0.0,0.0);
    glVertex2f(25,8);
    glVertex2f(26,8);
    glVertex2f(26,9);
    glVertex2f(25,9);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_TRIANGLES);
         glColor3f(0.0,1.0,0.0);
    glVertex2f(24,9);
    glVertex2f(27,9);
    glVertex2f(25.5,12);

     glEnd();
     glPopMatrix();


    //4TH TREE
    glPushMatrix();
         glBegin(GL_QUADS);
         glColor3f(0.1,0.0,0.0);
    glVertex2f(28,8);
    glVertex2f(29,8);
    glVertex2f(29,9);
    glVertex2f(28,9);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_TRIANGLES);
         glColor3f(0.0,1.0,0.0);
    glVertex2f(27,9);
    glVertex2f(30,9);
    glVertex2f(28.5,12);

     glEnd();
     glPopMatrix();


    //5TH TREE
    glPushMatrix();
         glBegin(GL_QUADS);
         glColor3f(0.1,0.0,0.0);
    glVertex2f(31,8);
    glVertex2f(32,8);
    glVertex2f(32,9);
    glVertex2f(31,9);

     glEnd();
     glPopMatrix();

    glPushMatrix();
         glBegin(GL_TRIANGLES);
         glColor3f(0.0,1.0,0.0);
    glVertex2f(30,9);
    glVertex2f(33,9);
    glVertex2f(31.5,12);

     glEnd();
     glPopMatrix();


   // 1ST MOUNTAIN
    glPushMatrix();
         glBegin(GL_TRIANGLES);
         glColor3f(0.1,0.0,0.0);
    glVertex2f(2,16);
    glVertex2f(5,16);
    glVertex2f(3.5,18);

     glEnd();
     glPopMatrix();


    //2ND MOUNTAIN
    glPushMatrix();
         glBegin(GL_TRIANGLES);
         glColor3f(0.1,0.0,0.0);
    glVertex2f(5,16);
    glVertex2f(10,16);
    glVertex2f(7.5,19);

     glEnd();
     glPopMatrix();


     //3RD MOUNTAIN
     glPushMatrix();
         glBegin(GL_TRIANGLES);
         glColor3f(0.1,0.0,0.0);
    glVertex2f(14,16);
    glVertex2f(17,16);
    glVertex2f(15.5,18);

     glEnd();
     glPopMatrix();


    //4TH MOUNTAIN
    glPushMatrix();
         glBegin(GL_TRIANGLES);
         glColor3f(0.1,0.0,0.0);
    glVertex2f(17,16);
    glVertex2f(22,16);
    glVertex2f(19.5,19);

     glEnd();
     glPopMatrix();


    //5TH MOUNTAIN
    glPushMatrix();
         glBegin(GL_TRIANGLES);
         glColor3f(0.1,0.0,0.0);
    glVertex2f(22,16);
    glVertex2f(25,16);
    glVertex2f(23.5,18);

     glEnd();
     glPopMatrix();


//6TH MOUNTAIN
    glPushMatrix();
         glBegin(GL_TRIANGLES);
         glColor3f(0.1,0.0,0.0);
    glVertex2f(27,16);
    glVertex2f(32,16);
    glVertex2f(29.5,19);

     glEnd();
     glPopMatrix();


     //BOAT





    //MOON
    glPushMatrix();
    glColor3f(1,1,0.4);
    glTranslatef(sun_move,0,0);
    drawFilledCircle(4,22,1.5);
   glPopMatrix();


    glFlush();
}

void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {

    case 'S':
        flagScale=true;
        break;
    case 's':
        flagScale=false;
        break;



    case 16: // Escape key
        exit(1);
    }
    glutPostRedisplay();
}




void animate()
{
if (flagScale == true)
{
boat_move-= 0.006;
if(boat_move < -18)
boat_move = 18;
}
if (flagScale == false)
{
boat_move = 0;

}
if (flagScale == true)
{
sun_move+= 0.002;
if(sun_move >20.8)
sun_move = -2;
}
if (flagScale == false)
{
sun_move = 0;

}
glutPostRedisplay();
}



void reshape (int w,int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,30,0,25);
    glMatrixMode(GL_MODELVIEW);
}

int main ( int argc, char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowPosition(0,150);
    glutInitWindowSize(800,700);
    glutCreateWindow("window 1");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glShadeModel( GL_SMOOTH );
  //  glEnable( GL_DEPTH_TEST );
glutKeyboardFunc(myKeyboardFunc);
    glutIdleFunc(animate);
    glutDisplayFunc(display);

    init();

    glutMainLoop();
}
