//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variables
	float h,b,ar;

	cout<<"Applied for right angles triangle only";

	//ask for height and base of the right angled triangle 
	cout<<"Enter the height and base of the right angles triangle respectively : ";

	//take height and base of the triangle respectively as input
	cin>>h>>b;

	//calculate the area of the triangle
	ar=(b*h)/2;

	//show the area of the triangle
	cout<<"Area of the triangle having "<<h<<" height and "<<b<<" base is : "<<ar;

	//end program
	return 0;
}
