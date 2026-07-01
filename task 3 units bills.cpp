#include <iostream>
using namespace std;
double calculatebill(int units)
{
	if(units<=100){
		return units*10;
	}
	else
	return units*15;
}
int main()
{
	int units;
	cout<<"enter units: ";
	cin>>units;
	cout<<"the unit you consumed is: "<<calculatebill(units);
	return 0;
}
