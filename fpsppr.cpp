#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<cmath>
using namespace std;

class Triangle
{
public:
 	float x1,y1,x2,y2,x3,y3;
	 void draw()
	{
	 	line(x1,y1,x2,y2);
	 	line(x1,y1,x3,y3);
	 	line(x2,y2,x3,y3);
	}
	 void scale(float sx, float sy, float tx, float ty)
	 {
	 	float sx1= x1*sx+tx*(1-sx);
	 	float sx2= x2*sx+tx*(1-sx);
	 	float sx3= x3*sx+tx*(1-sx);
	 	float sy1= y1*sy+ty*(1-sy);
	 	float sy2= y2*sy+ty*(1-sy);
	 	float sy3= y3*sy+ty*(1-sy);
	 	line(sx1,sy1,sx2,sy2);
	 	line(sx1,sy1,sx3,sy3);
	 	line(sx2,sy2,sx3,sy3);
	 }
	 void rotate(float a,float tx,float ty){
	 	a= a*0.01745;
	 	float rx1=tx +(x1-tx)*cos(a)-(y1-ty)*sin(a);
	 	float rx2=tx +(x2-tx)*cos(a)-(y2-ty)*sin(a);
	 	float rx3=tx +(x3-tx)*cos(a)-(y3-ty)*sin(a);
	 	
	 	float ry1=ty +(x1-tx)*sin(a)+(y1-ty)*cos(a);
	 	float ry2=ty +(x2-tx)*sin(a)+(y2-ty)*cos(a);
	 	float ry3=ty +(x3-tx)*sin(a)+(y3-ty)*cos(a);
	 	line(rx1,ry1,rx2,ry2);
	 	line(rx1,ry1,rx3,ry3);
	 	line(rx2,ry2,rx3,ry3);
	 	
	 }		
};

int main(){
	Triangle t;
	float sx,sy,a;
	int r;
	cout<<"Enter the co-ordinates of the triangle: ";
	cin>>t.x1>>t.y1>>t.x2>>t.y2>>t.x3>>t.y3;
	float tx=(t.x1+t.x2+t.x3)/3;
	float ty=(t.y1+t.y2+t.y3)/3;
	cout<<"The Centroid are: "<<tx<<","<<ty<<endl;
	
	here:
	cout<< "1. Scale About Centroid? 2. Rotate About Centroid?"<<endl;
	cin>>r;
	switch(r){
		case 1:{
			cout<<"Enter the Value For Scaling: ";
			cin>>sx>>sy;
			initwindow(1000,1000,"FPS");
			t.draw();
			t.scale(sx,sy,tx,ty);
			getch();
			closegraph();
			goto here;
		}
		case 2:{
			cout<<"Enter the Rotating Degree: ";
			cin>>a;
			initwindow(1000,1000,"PPR");
			t.draw();
			t.rotate(a,tx,ty);
			
			getch();
			closegraph();
			goto here;
		}
		default:
		{
			cout<<"Enter a Valid Option!!!\a";
			goto here;
		}
	}
	
	return 0;
}
