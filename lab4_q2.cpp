//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variables
	float c,f;

	//ask for temperature in celcius
	cout<<"Enter temperature in celcius : ";

	//take temperature as input in celcius
	cin>>c;

	//convert the temperature from celcius to fehrenheit
	f=(9*c+160)/5;

	//show temperature in fehrenheit
	cout<<"The temperature in fehrenheit is : "<<f;

	//end program
	return 0;
}
