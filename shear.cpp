#include<iostream>
#include<cmath>
#include<graphics.h>
#include<conio.h>
using namespace std;

void plot(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
	moveto(x1,y1);
	lineto(x2,y2);
	lineto(x3,y3);
	lineto(x4,y4);
	lineto(x1,y1);
}
int Xref(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
	int xref,shy;
	cout<<"enter xref and shear in y:"<<endl;
	cin>>xref>>shy;
	
	int X1=x1;
	int Y1=y1+shy*(x1-xref);
	int X2=x2;
	int Y2=y2+shy*(x2-xref);
	int X3=x3;
	int Y3=y3+shy*(x3-xref);
	int X4=x4;
	int Y4=y4+shy*(x4-xref);
	plot(X1, Y1,X2, Y2, X3, Y3, X4 ,Y4);
	
}

int Yref(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
	int yref,shx;
	cout<<"enter yref and shear in x:"<<endl;
	cin>>yref>>shx;
	
	int X1=x1+shx*(y1-yref);
	int Y1=y1;
	int X2=x2+shx*(y2-yref);
	int Y2=y2;
	int X3=x3+shx*(y3-yref);
	int Y3=y3;
	int X4=x4+shx*(y4-yref);
	int Y4=y4;
	plot(X1, Y1,X2, Y2, X3, Y3, X4 ,Y4);
	
}
int main(){
	initwindow(400,400);
	int choice,x1,x2,x3,y1,y2,y3,x4,y4,xr,yr;
	cout<<"Enter the coordinates of quadrilateral "<<endl;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	plot(x1, y1,x2, y2, x3, y3, x4 ,y4);
    here:
    cout<<"shearing with respect to:"<<endl;
	cout<<"1.x reference line\n2.y reference line\n3.Exit"<<endl;
	cin>>choice;
		switch(choice){
			case 1:
				Xref( x1, y1, x2, y2, x3, y3, x4, y4);
				break;
			case 2:
				Yref( x1, y1, x2, y2, x3, y3, x4, y4);
				break;
			case 3:
				exit(0);
				break;
			default:
				cout<<"Enter from option:";
				goto here; 
				
		}
	;
	getch();
	closegraph;
	return 0;
}  
