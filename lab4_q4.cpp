//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variables
	int dys,yr,wk,d;

	//ask for days that they want to be converted
	cout<<"Enter the days of which you want to know the year, weeks and days ";

	//enter the days as input
	cin>>dys;

	//calculate the years, weeks and days
	yr=dys/365;
	wk=(dys%365)/7;
	d=(dys%365)%7;

	//show the given no. of days in terms of years, weeks and days
	cout<<"The given no. of days in terms of years, weeks and days is as following"<<endl;
	cout<<dys<<" can be written as "<<yr<<" years, "<<wk<<" weeks and "<<d<<" days ";

	//end program
	return 0;
}
