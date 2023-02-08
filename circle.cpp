/*
#include<iostream>
#include<cmath>
#include<graphics.h>
#include<conio.h>
using namespace std;
void show(int x,int xc, int y, int yc){
        putpixel(xc + x, yc + y,3);
        //delay(50);
        putpixel(xc - x, yc + y,4);
        //delay(50);
		putpixel(xc + x, yc - y,5);
        //delay(50);
		putpixel(xc - x, yc - y,6);
        //delay(50);
        putpixel(xc + y, yc + x,7);
       // delay(50);
        putpixel(xc - y, yc + x,8);
       // delay(50);
		putpixel(xc + y, yc - x,9);
       // delay(50);
		putpixel(xc - y, yc - x,10);
		//delay(50);
	
}
void circle(int x,int xc,int y , int yc ,int p)
{
		show(x,xc,y,yc);
	while (x <= y)
    {
        x++;
        if (p < 0)
        {
            p += 2 * x + 1;
        }
        else
        {
			y--;
            p += 2 * (x - y) + 1;
        }
        show(x,xc,y,yc);
    }
}
int main(){
	int xc,yc,r,x,y,p;
	initwindow(400,400,"Circle");
	cout<<"Enter the radius of the circle: "<<endl;
	cin>>r;
	cout<<"Enter centre of the circle: "<<endl;
	cin>>xc>>yc;
	x=0;
	y=r;
	p=1-r;
	for ( int i=0 ;i<=r;i++)
	{
		circle(x,xc-i,y-i,yc-i,p+i);
	}
//circle(x,xc,y,yc,p);
//circle(x,xc,y,yc,p-3);//


	getch();
	closegraph();
}

  #include<iostream>
#include<cmath>
#include<graphics.h>
#include<conio.h>
using namespace std;
void show(int x,int xc, int y, int yc){
        putpixel(xc + x, yc + y,5);
        //delay(10);
        putpixel(xc - x, yc + y,4);
        //delay(10);
		putpixel(xc + x, yc - y,5);
        //delay(10);
		putpixel(xc - x, yc - y,4);
        //delay(10);
}
 void cylinder(int p1,int a,int b,int xc , int yc ,int x,int y){
 	int p2;
	show(x,xc,y,yc);
	while (b * b * x < a * a * y)
    {
        x++;
        if (p1 <= 0)
        {
            p1 += 2 * b * b * x + b * b;
        }
        else
        {
            y--;
            p1 += 2 * b * b * x - 2 * a * a * y + b * b;
        }
        show(x,xc,y,yc);
    }


    p2 = a * a * (y-1)*(y-1) + b * b * (x + 0.5) * (x + 0.5) - a * a * b * b;

    while (y != 0)
    {
        y--;
        if (p2 > 0)
        {
            p2 += -2 * a * a * y + a * a;
    }
        else
        {
            x++;
            p2 += 2 * b * b * x - 2 * a * a * y + a * a;
        }
        show(x,xc,y,yc);
    }
}
int main(){
	int xc,yc,a,b,x,y,p1,h;
	initwindow(400,400,"Ellipse");
	cout<<"Enter rx and ry of the ellipse: "<<endl;
	cin>>a>>b;
	cout<<"Enter the  centre of the ellipse: "<<endl;
	cin>>xc>>yc;
	cout<<"Enter the height of the cylinder :";
	cin>>h;
	x = 0;
    y = b;
    p1 = b * b - a * a * b + a * a / 4;
    for (int i=0;i<h;i++)
    {
    	  cylinder(p1,a,b,xc+i,yc+i,x,y);
	}
 
 //cylinder(p1,a,b,xc,yc,x,y);
	getch();
	closegraph();
}

*/
#include<iostream>
#include<cmath>
#include<graphics.h>
#include<conio.h>
using namespace std;
void show(int x,int xc, int y, int yc){
        putpixel(xc + x, yc + y,5);
        //delay(10);
        putpixel(xc - x, yc + y,5);
        //delay(10);
		putpixel(xc + x, yc - y,4);
        //delay(10);
		putpixel(xc - x, yc - y,4);
        //delay(10);
}
 void cylinder(int p1,int a,int b,int xc , int yc ,int x,int y){
 	int p2;
	show(x,xc,y,yc);
	while (b * b * x < a * a * y)
    {
        x++;
        if (p1 <= 0)
        {
            p1 += 2 * b * b * x + b * b;
        }
        else
        {
            y--;
            p1 += 2 * b * b * x - 2 * a * a * y + b * b;
        }
        show(x,xc,y,yc);
    }


    p2 = a * a * (y-1)*(y-1) + b * b * (x + 0.5) * (x + 0.5) - a * a * b * b;

    while (y != 0)
    {
        y--;
        if (p2 > 0)
        {
            p2 += -2 * a * a * y + a * a;
    }
        else
        {
            x++;
            p2 += 2 * b * b * x - 2 * a * a * y + a * a;
        }
        show(x,xc,y,yc);
    }
}
void line(int x,int y)
{
	putpixel(x,y,5);
}
int main(){
	int xc,yc,a,b,x,y,p1,h;
	initwindow(400,400,"Ellipse");
	cout<<"Enter rx and ry of the ellipse: "<<endl;
	cin>>a>>b;
	cout<<"Enter the  centre of the ellipse: "<<endl;
	cin>>xc>>yc;
	cout<<"Enter the height of the cylinder :";
	cin>>h;
	x = 0;
    y = b;
    p1 = b * b - a * a * b + a * a / 4;
    for (int i=0;i<h;i++)
    {
    	  cylinder(p1,a,b,xc,yc-i,x,y);
	}
	    for (int i=0;i<500;i++)
    {
    	  cylinder(p1,20,40,600+i,360,x,y);
	}
 for (int i=0;i<1500;i++)
 {
 	line(i,400);
 }
 //cylinder(p1,a,b,xc,yc,x,y);
	getch();
	closegraph();
}


