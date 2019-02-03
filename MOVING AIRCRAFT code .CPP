#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <GL/glut.h>
void Mountain();
void City();
void Airport();
void Airport1();
void Sea();
void Final();
void sun(GLfloat x,GLfloat Y);
GLfloat YY1=860;
GLfloat x1=500;
int count1=0;
GLfloat a = 1.001;
GLfloat carX=.1;
GLfloat x=50,y=150,nl=0;
GLfloat gfPosSX = 250.0;
GLfloat gfPosSY = 600.0;
GLfloat gfPosX = 830.0;
GLfloat gfPosY = 309.0;
GLfloat gfPosX1 =800.0;
GLfloat gfPosY1 =340.0;
GLfloat gfPosX2 =0.0;
GLfloat gfPosY2 = 5.0;
GLfloat gfDeltaX = 4.0;
GLfloat gfDeltaY = 0.0;
GLfloat sx=900,sy=400,lx=1000,ly=250;
int count=0,scount=0;
float radius=5,radiusC=3;
GLfloat gfDeltaX1 = 4.0;
GLfloat gfDeltaY1 = 0.0;
void Timer(int i)
{
  glutPostRedisplay();
    glutTimerFunc(30, Timer, 0);
}
void Plane() {
	  float angle;
	  float x2,y2;

	if(count1==0)
		{
			
	if(gfPosX<30)
		gfPosX=-1000;
	}
			glBegin(GL_POLYGON);
	glColor3f(0,0,0);
for (angle=1.0f;angle<360.0f;angle+=0.2)
{
    x2 =gfPosX +sin(angle)*radius;
     y2 = gfPosY+cos(angle)*radius;
    glVertex2f(x2,y2);
}
glEnd();
	
if(gfPosX1==500)
{
	 gfDeltaY = 1.0;
     gfDeltaY1 = 1.0;

}
	  glBegin(GL_POLYGON);
	 glColor3f(10.9,10.9,10.9);
	glVertex2f(gfPosX1,gfPosY1);//1

	glVertex2f(gfPosX1+20,gfPosY1+10);//2

	//3
	glVertex2f(gfPosX1+35,gfPosY1+22);
	//4
	glVertex2f(gfPosX1+55,gfPosY1+20);
	 //5
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
glColor3f(0,0,0);
	 char *a="LEFT CLICK TO CONTINUE";
    glRasterPos2f( 700 , 250 );
    for(int i = 0; a[i] !='\0'; i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, a[i]);



	
glColor3f(0,0,0);
	 char *b="N I T E S H  K U M A R";
    glRasterPos2f( 150 , 300 );
    for(int i = 0; b[i] !='\0'; i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, b[i]);

	
glColor3f(0,0,0);
	 char *c="im.nits.kr@gmail.com";
    glRasterPos2f( 150 , 230 );
    for(int i = 0; c[i] !='\0'; i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c[i]);


	glColor3f(0,0,0);
	 char *D="A I R C R A F T    A D ";
    glRasterPos2f( 450 , 800 );
    for(int i = 0; D[i] !='\0'; i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, D[i]);
	int x=225,y=0;

	//NA
	glLineWidth(10);
glColor3f(1,1,1);
glBegin(GL_LINE_STRIP);
glVertex2f(200+x,500+y);
glVertex2f(250+x,650+y);
glVertex2f(275+x,500+y);
glVertex2f(325+x,650+y);
glVertex2f(325+x,500+y);
glVertex2f(325+x,550+y);
glVertex2f(305+x,550+y);
glEnd();
//I

	 char *s="Smile Every Mile...";
    glRasterPos2f(225+325+10,500+y);
    for(int i = 0; s[i] !='\0'; i++)
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, s[i]);


glFlush();
}

void main_menu(int ch)
{
	switch(ch)
	{
	//case 1:glutIdleFunc(NULL);
	//	   break;

	//case 2:glutIdleFunc(Plane);
	//	   break;

	case 3:exit(0);
	}

}



int main(int argc, char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1500,1500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Aircraft Ad");

	glutCreateMenu(main_menu);
	//glutAddMenuEntry("Stop Animation",1);
	//glutAddMenuEntry("Start Animation",2);	
	glutAddMenuEntry("Quit",3);
	glutAttachMenu(GLUT_RIGHT_BUTTON);;

	glutDisplayFunc(myinit);
	glutMouseFunc(mouse);
	Timer(1);
	glutMainLoop();
	return 0;

}

