//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variables
	float P,Q,R;

	//ask for two angles of a triangle
	cout<<"Enter value of two angles of the triangle : ";

	//take two angles of triangle as input
	cin>>P>>Q;

	//calculate the third angle
	R=180-(P+Q);

	//show the third angle as output
	cout<<"The third angle of the triangle is "<<R<<"degrees";

	//end program
	return 0;
}
