//include library
#include<iostream>
#include<cmath>

using namespace std;

//create main
int main()
{
	//declare variables
	float P,R,T,CI;

	//ask for principal amount,rate of interest and time period of whose compound interest you want to find
	cout<<"Enter the principal amount, rate of interest and time period respectivey of which you want to find the compound interest of";

	//take principal amount,rate of interest and time period respectively as input
	cin>>P>>R>>T;

	//calculate the compound interest
	CI=P*pow(1+R/100,T);

	//show the compound interest
	cout<<"The compound interest of the principal amount "<<P<<" ,rate of interest "<<R<<" and time period "<<T<<" is "<<CI;

	//end program
	return 0;
}
