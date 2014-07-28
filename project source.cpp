#include<GL/glut.h>
#include<stdio.h>
#include<string.h>


int flag,n,moveb=0;;
float x1=5,x2=60,x3=120,x4=180,x5=240,x6=300,x7=360,x8=420,x9=480;
float x10=30,x11=90,x12=150,x13=210,x14=270,x15=330,x16=390,x17=450,x18=510;
float y1=490,y2=450,y3=400,y4=350,y5=300,y6=250,y7=200,y8=150,y9=100,y10=50,yy;
float e1=120,e2=220,e3=170,e4=500,e5=650,e6=580,e7=150,e8=650;
float f1=480,f2=520,f3=855,f4=2190,f5=1320,f6=1040,f7=2520,f8=700;

void output1();
void output2();
void blank();
void boy();
void girl();
void rain();
void check();
void display();


	void output1(float x1,float y1,char* string)
	{	
	int len,i;
	glRasterPos2f(x1,y1);
	len=(int)strlen(string);
	
		for(i=0;i<len;i++)
		{
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13,string[i]);
		}
	}

	void output2(float x2,float y2,char* string)
	{	
	int len,i;
	glRasterPos2f(x2,y2);
	len=(int)strlen(string);
	
		for(i=0;i<len;i++)
		{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);
		}
	}
	void display()
	{

		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glColor3f(0.0,0.0,0.0);
		
		
		glPointSize(3);

		glBegin(GL_POLYGON);		//upper screen
		glColor3f(0.3,0.7,0.9);
		glVertex2f(0.0,50.0);
		glVertex2f(499.0,50.0);
		glVertex2f(499.0,499.0);
		glVertex2f(0.0,499.0);
		glEnd();

		glBegin(GL_POLYGON);
		glVertex2f(0.0,0.0);		//grass(triangle1)
		glVertex2f(75.0,50.0);
		glVertex2f(0.0,50.0);
		glEnd();

		glBegin(GL_POLYGON);		//grass(triangle2)
		glVertex2f(434.0,0.0);
		glVertex2f(499.0,50.0);
		glVertex2f(499.0,0.0);
		glEnd();


		glBegin(GL_POLYGON);		//tree 2(right)
		glColor3f(0.7,0.3,0.0);
		glVertex2f(450.0,25.0);
		glVertex2f(450.0,100.0);
		glVertex2f(430.0,70.0);
		glVertex2f(430.0,25.0);
		glEnd();
	    
		glBegin(GL_POLYGON);		//tree 1(left)
		glColor3f(0.7,0.3,0.0);
		glVertex2f(110.0,25.0);
		glVertex2f(110.0,175.0);
		glVertex2f(90.0,175.0);
		glVertex2f(90.0,25.0);
		glEnd();
	     

		glBegin(GL_POLYGON);		//tree 3(BROKEN - right)
		glColor3f(0.7,0.3,0.0);
		glVertex2f(345.0,25.0);
		glVertex2f(345.0,45.0);
		glVertex2f(390.0,45.0);
		glVertex2f(420.0,25.0);
		glEnd();
		
		
		glBegin(GL_POLYGON);		//triangle 1 for the tree
		glColor3f(0.0,0.3,0.0);
		glVertex2f(23.0,175.0);
		glVertex2f(178.0,175.0);
		glVertex2f(100.0,250.0);
		glEnd();

		glBegin(GL_POLYGON);		//triangle 2
		glColor3f(0.0,0.4,0.0);
		glVertex2f(23.0,190.0);
		glVertex2f(178.0,190.0);
		glVertex2f(100.0,265.0);
		glEnd();

		
		glBegin(GL_POLYGON);		//triangle 3
		glColor3f(0.0,0.5,0.0);
		glVertex2f(30.0,215.0);
		glVertex2f(170.0,215.0);
		glVertex2f(100.0,280.0);
		glEnd();

		
		glBegin(GL_POLYGON);		//triangle 4
		glColor3f(0.0,0.6,0.0);
		glVertex2f(30.0,230.0);
		glVertex2f(170.0,230.0);
		glVertex2f(100.0,295.0);
		glEnd();

		
		glBegin(GL_POLYGON);		//triangle 5
		glColor3f(0.0,0.7,0.0);
		glVertex2f(35.0,255.0);
		glVertex2f(165.0,255.0);
		glVertex2f(100.0,325.0);
		glEnd();

		
		
		glBegin(GL_POLYGON);		//triangle 6
		glColor3f(0.0,0.8,0.0);
		glVertex2f(35.0,270.0);
		glVertex2f(165.0,270.0);
		glVertex2f(100.0,345.0);
		glEnd();

		
		glBegin(GL_POLYGON);		//triangle 7
		glColor3f(0.0,0.9,0.0);
		glVertex2f(40.0,295.0);
		glVertex2f(160.0,295.0);
		glVertex2f(100.0,350.0);
		glEnd();

		
		glBegin(GL_POLYGON);		//triangle 8
		glColor3f(0.0,1.0,0.0);
		glVertex2f(42.0,310.0);
		glVertex2f(158.0,310.0);
		glVertex2f(100.0,350.0);
		glEnd();

		glPushMatrix();
		boy();
		girl();
		rain();
		check();
		if(flag==1)
		{
			blank();
		}
		yy=500;
		glPopMatrix();

		glFlush();
		glutSwapBuffers();
	}

	void blank()
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glBegin(GL_POLYGON);								//	'ABOUT' screen
		glColor3f(0.0,0.0,0.0);
		glVertex2f(0.0,0.0);
		glVertex2f(500.0,0.0);
		glVertex2f(500.0,500.0);
		glVertex2f(0.0,500.0);
		glEnd();

		glColor3f(1.0,0.0,0.0);
		output2(200.0,400.0," SIMPLE ANIMATION");
		output1(190.0,380.0,"___________________________________");
		
		output1(40.0,300.0,"- A Simple Animation which has keyboard and mouse interactions for the movement of the character( BOY ).");
		output1(40.0,280.0,"- The character starts moving towards the tree for shade as soon as the rain starts.");
		output1(40.0,260.0,"- We can move the character LEFT and RIGHT using the keys '4' and '6' on the keyboard.");
		output1(40.0,240.0,"- A menu opens up on the right click of the mouse button which include funtions to continue rain, zoom");
		output1(40.0,220.0,"  about and exit.");
		output1(40.0,200.0,"- Its a public awareness message to stop deforestation of trees");
		output2(50.0,100.0,"Vinay Potluri");
		output2(50.0,70.0,"1RE07CS056");

		output2(300.0,100.0,"");
		output2(300.0,70.0,"");
		glFlush();
	}

	void boy()
	{
	for(int i=0;i<1;i++)
		{
		glPushMatrix();
		glTranslatef(moveb,0.0,0.0);
		glBegin(GL_POLYGON);		//boy head
		glColor3f(0.0,0.0,1.0);
		glVertex2f(285.0,95.0);
		glVertex2f(305.0,95.0);
		glVertex2f(305.0,115.0);
		glVertex2f(285.0,115.0);
		glEnd();

		glBegin(GL_POINTS);			//boy eyes
		glColor3f(1.0,1.0,1.0);
		glVertex2f(291.0,105.0);
		glVertex2f(299.0,105.0);
		glEnd();

		glBegin(GL_LINES);			//boy mouth
		glColor3f(1.0,1.0,1.0);
		glVertex2f(291.0,98.0);
		glVertex2f(299.0,98.0);
		glEnd();

		glBegin(GL_POLYGON);		//boy neck
		glColor3f(0.0,0.0,0.0);
		glVertex2f(290.0,90.0);
		glVertex2f(300.0,90.0);
		glVertex2f(300.0,95.0);
		glVertex2f(290.0,95.0);
		glEnd();


		glBegin(GL_POLYGON);		//boy body
		glColor3f(0.0,0.0,1.0);
		glVertex2f(280.0,40.0);
		glVertex2f(310.0,40.0);
		glVertex2f(310.0,90.0);
		glVertex2f(280.0,90.0);
		glEnd();

		glBegin(GL_LINES);			//boy leg1
		glColor3f(0.0,0.0,0.0);
		glVertex2f(288.0,40.0);
		glVertex2f(288.0,25.0);
		glEnd();
		
		glBegin(GL_LINES);			//boy leg1 + feet
		glColor3f(0.0,0.0,0.0);
		glVertex2f(288.0,25.0);
		glVertex2f(283.0,25.0);
		glEnd();

		glBegin(GL_LINES);			//boy leg2
		glColor3f(0.0,0.0,0.0);
		glVertex2f(302.0,40.0);
		glVertex2f(302.0,25.0);
		glEnd();
		
		glBegin(GL_LINES);			//boy leg2 + feet
		glColor3f(0.0,0.0,0.0);
		glVertex2f(302.0,25.0);
		glVertex2f(307.0,25.0);
		glEnd();

		glBegin(GL_LINES);			//boy hand1 (left)
		glColor3f(0.0,0.0,0.0);
		glVertex2f(280.0,70.0);
		glVertex2f(275.0,45.0);
		glEnd();

		glBegin(GL_POINTS);			//point hand1+dot
		glColor3f(0.0,0.0,0.0);
		glVertex2f(275.0,45.0);
		glEnd();

		
		glBegin(GL_LINES);			//boy hand2 (right)
		glColor3f(0.0,0.0,0.0);
		glVertex2f(310.0,70.0);
		glVertex2f(315.0,45.0);
		glEnd();

		glBegin(GL_POINTS);			//point hand2+dot
		glColor3f(0.0,0.0,0.0);
		glVertex2f(315.0,45.0);
		glEnd();
		glPopMatrix();
	
		if(moveb>-150)
		{
			moveb--;
		}
		else
		{
		output2(350.0,400.0,"SAVE TREES");
		output2(370.0,370.0,"SAVE YOURSELF");
		}
		}
	glutPostRedisplay();
	glFlush();
	
	}

	void girl()
	{


	for(int i=0;i<5;i++)
		{
		glBegin(GL_POLYGON);		//girl head
		glColor3f(1.0,0.0,0.5);
		glVertex2f(40.0,90.0);
		glVertex2f(60.0,90.0);
		glVertex2f(60.0,110.0);
		glVertex2f(40.0,110.0);
		glEnd();
		
		glBegin(GL_POINTS);			//girl eyes
		glColor3f(1.0,1.0,1.0);
		glVertex2f(46.0,100.0);
		glVertex2f(54.0,100.0);
		glEnd();

		glBegin(GL_LINES);			//girl mouth
		glColor3f(1.0,1.0,1.0);
		glVertex2f(45.0,93.5);
		glVertex2f(55.0,93.5);
		glEnd();

		glBegin(GL_POLYGON);
		glColor3f(1.0,0.0,0.5);		//girl body
		glVertex2f(30.0,40.0);
		glVertex2f(70.0,40.0);
		glVertex2f(50.0,90.0);
		glEnd();

		glBegin(GL_LINES);			//girl leg1
		glColor3f(0.0,0.0,0.0);
		glVertex2f(45.0,40.0);
		glVertex2f(45.0,25.0);
		glEnd();
		
		glBegin(GL_LINES);			//girl leg1 + feet
		glColor3f(0.0,0.0,0.0);
		glVertex2f(45.0,25.0);
		glVertex2f(40.0,25.0);
		glEnd();
		
		glBegin(GL_LINE_LOOP);		//girl leg2
		glColor3f(0.0,0.0,0.0);
		glVertex2f(55.0,40.0);
		glVertex2f(55.0,25.0);
		glEnd();
		
		glBegin(GL_LINES);			//girl leg2 + feet
		glColor3f(0.0,0.0,0.0);
		glVertex2f(55.0,25.0);
		glVertex2f(60.0,25.0);
		glEnd();

		glBegin(GL_LINES);			//girl hand1 (left)
		glColor3f(0.0,0.0,0.0);
		glVertex2f(42.0,70.0);
		glVertex2f(30.0,50.0);
		glEnd();

		glBegin(GL_POINTS);			//dots
		glColor3f(0.0,0.0,0.0);
		glVertex2f(29.0,50.0);
		glEnd();
		
		glBegin(GL_LINES);			//girl hand2 (right)
		glColor3f(0.0,0.0,0.0);
		glVertex2f(58.0,70.0);
		glVertex2f(70.0,50.0);
		glEnd();

		glBegin(GL_POINTS);			//dots
		glColor3f(0.0,0.0,0.0);
		glVertex2f(70.9,50.0);
		glEnd();
		glFlush();
		}
	}

	
	void rain()
	{
	for(int i=0;i<7;i++)
		{
		glTranslatef(0.0,-1.0,0.0);
		glPointSize(1.2);

		glBegin(GL_POINTS);
		glColor3f(0.5,1.0,1.0);		//stars in window
		glVertex2f(x1,y1);	
		glVertex2f(x2,y1);			//rain 1
		glVertex2f(x3,y1);	
		glVertex2f(x4,y1);	
		glVertex2f(x5,y1);	
		glVertex2f(x6,y1);	
		glVertex2f(x7,y1);	
		glVertex2f(x8,y1);	
		glVertex2f(x9,y1);
		glVertex2f(x10,y1);
		glVertex2f(x11,y1);
		glVertex2f(x12,y1);
		glVertex2f(x13,y1);
		glVertex2f(x14,y1);
		glVertex2f(x15,y1);
		glVertex2f(x16,y1);
		glVertex2f(x17,y1);
		glVertex2f(x18,y1);
		

		glVertex2f(x1,y2);			//rain 2
		glVertex2f(x2,y2);
		glVertex2f(x3,y2);	
		glVertex2f(x4,y2);	
		glVertex2f(x5,y2);	
		glVertex2f(x6,y2);	
		glVertex2f(x7,y2);	
		glVertex2f(x8,y2);	
		glVertex2f(x9,y2);
		glVertex2f(x10,y2);
		glVertex2f(x11,y2);
		glVertex2f(x12,y2);
		glVertex2f(x13,y2);
		glVertex2f(x14,y2);
		glVertex2f(x15,y2);
		glVertex2f(x16,y2);
		glVertex2f(x17,y2);
		glVertex2f(x18,y2);

		glVertex2f(x1,y3);			//rain 3
		glVertex2f(x2,y3);
		glVertex2f(x3,y3);	
		glVertex2f(x4,y3);	
		glVertex2f(x5,y3);	
		glVertex2f(x6,y3);	
		glVertex2f(x7,y3);	
		glVertex2f(x8,y3);	
		glVertex2f(x9,y3);
		glVertex2f(x10,y3);
		glVertex2f(x11,y3);
		glVertex2f(x11,y3);
		glVertex2f(x12,y3);
		glVertex2f(x13,y3);
		glVertex2f(x14,y3);
		glVertex2f(x15,y3);
		glVertex2f(x16,y3);
		glVertex2f(x17,y3);
		glVertex2f(x18,y3);

		glVertex2f(x1,y4);			//rain 4
		glVertex2f(x2,y4);
		glVertex2f(x3,y4);	
		glVertex2f(x4,y4);	
		glVertex2f(x5,y4);	
		glVertex2f(x6,y4);	
		glVertex2f(x7,y4);	
		glVertex2f(x8,y4);	
		glVertex2f(x9,y4);
		glVertex2f(x10,y4);
		glVertex2f(x11,y4);
		glVertex2f(x12,y4);
		glVertex2f(x13,y4);
		glVertex2f(x14,y4);
		glVertex2f(x15,y4);
		glVertex2f(x16,y4);
		glVertex2f(x17,y4);
		glVertex2f(x18,y4);

		glVertex2f(x1,y5);			//rain 5
		glVertex2f(x2,y5);
		glVertex2f(x3,y5);	
		glVertex2f(x4,y5);	
		glVertex2f(x5,y5);	
		glVertex2f(x6,y5);	
		glVertex2f(x7,y5);	
		glVertex2f(x8,y5);	
		glVertex2f(x9,y5);
		glVertex2f(x10,y5);
		glVertex2f(x11,y5);
		glVertex2f(x12,y5);
		glVertex2f(x13,y5);
		glVertex2f(x14,y5);
		glVertex2f(x15,y5);
		glVertex2f(x16,y5);
		glVertex2f(x17,y5);
		glVertex2f(x18,y5);

		glVertex2f(x1,y6);			//rain 6
		glVertex2f(x2,y6);
		glVertex2f(x3,y6);	
		glVertex2f(x4,y6);	
		glVertex2f(x5,y6);	
		glVertex2f(x6,y6);	
		glVertex2f(x7,y6);	
		glVertex2f(x8,y6);	
		glVertex2f(x9,y6);
		glVertex2f(x10,y6);
		glVertex2f(x11,y6);
		glVertex2f(x12,y6);
		glVertex2f(x13,y6);
		glVertex2f(x14,y6);
		glVertex2f(x15,y6);
		glVertex2f(x16,y6);
		glVertex2f(x17,y6);
		glVertex2f(x18,y1);

		glVertex2f(x1,y7);			//rain 7
		glVertex2f(x2,y7);
		glVertex2f(x3,y7);	
		glVertex2f(x4,y7);	
		glVertex2f(x5,y7);	
		glVertex2f(x6,y7);	
		glVertex2f(x7,y7);	
		glVertex2f(x8,y7);	
		glVertex2f(x9,y7);
		glVertex2f(x10,y7);
		glVertex2f(x11,y7);
		glVertex2f(x12,y7);
		glVertex2f(x13,y7);
		glVertex2f(x14,y7);
		glVertex2f(x15,y7);
		glVertex2f(x16,y7);
		glVertex2f(x17,y7);
		glVertex2f(x18,y7);

		glVertex2f(x1,y8);			//rain 8
		glVertex2f(x2,y8);
		glVertex2f(x3,y8);	
		glVertex2f(x4,y8);	
		glVertex2f(x5,y8);	
		glVertex2f(x6,y8);	
		glVertex2f(x7,y8);	
		glVertex2f(x8,y8);	
		glVertex2f(x9,y8);
		glVertex2f(x10,y8);
		glVertex2f(x11,y8);
		glVertex2f(x12,y8);
		glVertex2f(x13,y8);
		glVertex2f(x14,y8);
		glVertex2f(x15,y8);
		glVertex2f(x16,y8);
		glVertex2f(x17,y8);
		glVertex2f(x18,y8);

		glVertex2f(x1,y9);			//rain 9
		glVertex2f(x2,y9);
		glVertex2f(x3,y9);	
		glVertex2f(x4,y9);	
		glVertex2f(x5,y9);	
		glVertex2f(x6,y9);	
		glVertex2f(x7,y9);	
		glVertex2f(x8,y9);	
		glVertex2f(x9,y9);
		glVertex2f(x10,y9);
		glVertex2f(x11,y9);
		glVertex2f(x12,y9);
		glVertex2f(x13,y9);
		glVertex2f(x14,y9);
		glVertex2f(x15,y9);
		glVertex2f(x16,y9);
		glVertex2f(x17,y9);
		glVertex2f(x18,y9);

		glVertex2f(x1,y10);	
		glVertex2f(x2,y10);			//rain 10
		glVertex2f(x3,y10);	
		glVertex2f(x4,y10);	
		glVertex2f(x5,y10);	
		glVertex2f(x6,y10);	
		glVertex2f(x7,y10);	
		glVertex2f(x8,y10);	
		glVertex2f(x9,y10);
		glVertex2f(x10,y10);
		glVertex2f(x11,y10);
		glVertex2f(x12,y10);
		glVertex2f(x13,y10);
		glVertex2f(x14,y10);
		glVertex2f(x15,y10);
		glVertex2f(x16,y10);
		glVertex2f(x17,y10);
		glVertex2f(x18,y10);

		y1=y1-1;
		y2=y2-1;
		y3=y3-1;
		y4=y4-1;
		y5=y5-1;
		y6=y6-1;
		y7=y7-1;
		y8=y8-1;
		y9=y9-1;
		y10=y10-1;

		while(y1==0)
		{
			y1=500;
		}
		while(y2==0)
		{
			y2=500;
		}
		while(y3==0)
		{
			y3=500;
		}
		while(y4==0)
		{
			y4=500;
		}
		while(y5==0)
		{
			y5=500;
		}
		while(y6==0)
		{
			y6=500;
		}
		while(y7==0)
		{
			y7=500;
		}
		while(y8==0)
		{
			y8=500;
		}
		while(y9==0)
		{
			y9=500;
		}
		while(y10==0)
		{
			y10=500;
		}

		}
		glEnd();
		glFlush();
	}

	void myInit()
	{
		glClearColor(0.0,0.9,0.0,0.0);
		glPointSize(1.0);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluOrtho2D(0.0,499.0,0.0,499.0);
	}

	void keyboard(unsigned char key,int a,int b)
	{
		if(key=='4')
		{
			glPushMatrix();
			moveb--;
			void boy();
			glPopMatrix();
		}
		else
		if(key=='6')
		{
			glPushMatrix();
			moveb++;
			void boy();
			glPopMatrix();
		}
		else
		if(key=='q')
		{
			exit(0);
		}	
	}

	void menu(int id)
	{
		switch(id)
		{
			case 1:	display();				//continue raining
					break;
			case 2:	glPushMatrix();			//move left
					moveb=moveb-5;
					void check();
					void boy();
					glPopMatrix();
					break;
			case 3:	glPushMatrix();			//move right
					moveb=moveb+5;
					void boy();
					glPopMatrix();
					break;
			case 4: flag=1;					//about
					void blank();	
					glutPostRedisplay();
				    break;					
			case 5:exit(0);					//exit
				break;
		
		}

	}

	void check()
	{
		if(moveb>=-180)
		{
			glColor3f(0.0,0.0,0.0);
			output1(50.0,120.0," Hi ! ");
		}
		else
		if(moveb>-190)
		{
			glColor3f(0.0,0.0,0.0);
			output1(120.0,110.0," Wats up ???");
		}
		else
		if(moveb>=-193)
		{
			glColor3f(0.0,0.0,0.0);
			output1(30.0,120.0," Isn't it raining heavily ??? ");
		}
		else
		if(moveb>=-198)
		{
			glColor3f(0.0,0.0,0.0);
			output1(120.0,110.0," 50 % of the girls dont havebrains ? ? ?");
		}
		else
		if(moveb>=-200)
		{
			glColor3f(0.0,0.0,0.0);
			output1(20.0,115.0," no...!!!  50 % of them have brains ");
		}
		else
		if(moveb>=-202)
		{
			glColor3f(0.0,0.0,0.0);
			output1(120.0,110.0," whatever...!  u proved it right !!! ");
		}
	}

	void main(int argc,char **argv)
	{
		glutInit(&argc,argv);
		glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
		glutInitWindowSize(1015,700);
		glutInitWindowPosition(0,0);
		glutCreateWindow("Simple Animation");
		glutDisplayFunc(display);
		glutKeyboardFunc(keyboard);

		glutCreateMenu(menu);
		glutAddMenuEntry("CONTINUE RAIN",1);
		glutAddMenuEntry(" << MOVE LEFT << ",2);
		glutAddMenuEntry(" >> MOVE RIGHT >> ",3);
		glutAddMenuEntry("ABOUT",4);
		glutAddMenuEntry("EXIT",5);
		glutAttachMenu(GLUT_RIGHT_BUTTON);

		myInit();
		glutMainLoop();
	}