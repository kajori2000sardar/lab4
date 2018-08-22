//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variables
	float cm,m,km;
	
	//ask for length in centimeter
	cout<<"Enter length in centimeter ";

	//take lenth as input in centimeter
	cin>>cm;

	//convert the length from centimeter to metre and kilometer
	m=cm/100;
	km=cm/100000;

	//show output
	cout<<"Length in meter is : "<<m<<endl;
	cout<<"Length in kilomter is : "<<km;

	//end program
	return 0;
}
