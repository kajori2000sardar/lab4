//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variables
	float c,f;

	//ask for tempertaure in fehrenheit
	cout<<"Enter temperature in fehrenheit";

	//take the temperature as input in fehrenheit
	cin>>f;

	//convert the tempertaure from fehrenheit to celcius
	c=5*(f-32)/9;

	//show temperature in celcius
	cout<<"The temperature in celcius is : "<<c;

	//end the program
	return 0;
}
