//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variables
	float P,R,T,SI;

	//ask for the principal amount,rate of interest and time period
	cout<<"Enter the principal amount, rate of interest and time period respectively of the simple interest you want to know ";

	//take principal interest, rate of interest and time period respectively as input
	cin>>P>>R>>T;

	//calculate simple interest of the given values
	SI=(P*R*T)/100;

	//show the calculate simple interest
	cout<<"Simple interest of the principal amount "<<P<<" ,rate of interest "<<R<<" and time period "<<T<<" is "<<SI;

	//end program
	return 0;
}
