#include <iostream>
using namespace std;
//Function Defination
//Global Variable

//int var=10;
void areaOfCircle()
{
	double r;
		cout<<"Enter the radius of the circle:";
		cin>>r;
		cout<<"Area of circle is: "<<r*r*3.14<<endl;
}
void areaOfTriangle()
{
		double b,h;
		cout<<"Enter base of the triangle:";
		cin>>b;
		cout<<"Enter height of the triangle:";
		cin>>h;
		cout<<"Area of the Triangle is:"<<b*h*0.5<<endl;
}
void areaOfRectangle()
{
		int l,w;
		cout<<"Enter Length of the rectangle:";
		cin>>l;
		cout<<"Enter width of the rectangle:";
		cin>>w;
		cout<<"Area of Rectangle is:"<<l*w<<endl;
}
void areaOfSquare()
{
		int side;
		cout<<"Enter side of Square:";
		cin>>side;
		cout<<"Area of square is: "<<side*side<<endl;
}

int main()
{
	int choice;
	cout<<"\t\t   MENU"<<endl;
	cout<<"\t\t Press 1 for Area of Square"<<endl;
	cout<<"\t\t Press 2 for Area of Rectangle"<<endl;
	cout<<"\t\t Press 3 for Area of Circle"<<endl;
	cout<<"\t\t Press 4 for Area of Triangle"<<endl;
	cout<<"Enter Your choice:";
	cin>>choice;
	if(choice==1)
	{
		areaOfSquare();
	}
	else if(choice==2)
	{
		areaOfRectangle();
	}
	else if(choice==3)
	{
		areaOfCircle();
	}
	else if(choice==4)
	{
		areaOfTriangle();
	}
	else 
	cout<<"You enter Invalid choice!"<<endl;
	
	return 0;
}
