//include library
#include<iostream>
#include<cmath>

using namespace std;

//create main
int main()
{
	//declare variables
	float l,ar;

	//ask for side of the equilateral triangle
	cout<<"Enter the length of the side of the equilateral triangle : ";

	//take the length of the side of the equilateral triangle as input
	cin>>l;

	//calculate the area using the given length of the side
	ar=(cbrt(3)*l*l)/4;

	//show the calculated area of the equilateral triangle
	cout<<"Area of the equilateral triangle having "<<l<<" as its side length is :"<<ar;

	//end program
	return 0;
}
