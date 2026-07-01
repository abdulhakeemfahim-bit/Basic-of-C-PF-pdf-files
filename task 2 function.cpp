#include <iostream>
using namespace std;
int Div()
{
	int a,b;
	cout<<"Enter value of a & b";
	cin>>a>>b;
	return a/b;
}
int Mul()
{
	int a,b;
	cout<<"Enter value of a & b";
	cin>>a>>b;
	return a*b;
}
int Sub()
{
		int a,b;
	cout<<"Enter value of a & b";
	cin>>a>>b;
	return a-b;
}
int Add()
{
	int a,b;
	cout<<"Enter value of a & b";
	cin>>a>>b;
	return a+b;
}

void airthmaticOperation()
{
	int ch;
	cout<<"\t\t MENU FOR AIRTHMATIC OPERATION"<<endl;
	cout<<"\t\t Press 1 for Addition:"<<endl;
	cout<<"\t\t Press 2 for Subtraction:"<<endl;
	cout<<"\t\t Press 3 for Multiplication:"<<endl;
	cout<<"\t\t Press 4 for Division:"<<endl;
	cout<<"Enter your choice:";
	cin>>ch;
	if(ch==1)
	{
		cout<<Add();
	}
	else if(ch==2)
	{
		cout<<Sub();
	}
	else if(ch==3)
	{
		cout<<Mul();
	}
	else if(ch==4)
	{
		cout<<Div();
	}
}
int main()
{
	int choice;
	cout<<"\t\t MENU"<<endl;
	cout<<"\t\tPress 1 for Airthmatic Operation(+,-, /,*)"<<endl;
	cout<<"Enter your choice:";
	cin>>choice;
	if(choice==1)
	{
		
		//function calling
		airthmaticOperation();
			
			}
	
	
	return 0;
}
