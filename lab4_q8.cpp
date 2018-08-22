//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variables
	float u,v,w,x,y,tl,avg,per;

	//ask for marks of five subjects
	cout<<"Enter marks of five subjects : ";

	//accept marks of five subjects
	cin>>u>>v>>w>>x>>y;

	//calculate total,average and percentage of the marks given
	tl=(u+v+w+x+y);
	avg=tl/5;
	per=tl/500*100;

	//show the total,average and percentage of the given marks
	cout<<"The total marks is "<<tl<<endl;
	cout<<"The average of the marks given is "<<avg<<endl;
	cout<<"The percentage of the given marks assuming that the full marks in each subject is 100 is "<<per;

	//end program
	return 0;
}
