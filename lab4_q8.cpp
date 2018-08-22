//first include the library
#include<iostream>
using namespace std;

//calculating result
int main ()

//process
	{

//declare the main function
	double a,b,c,d,e,f,total,average,percentage;

/*celcius is the temperature in celcius to be inputted by user
fahrenheit is the converted temperature to fahrenheit*/

	cout<<"Please input marks in five subjects each and also the full marks in all the subjects:"<<endl;
	cout<<"e.g. a b c d e f =>a,b,c,d,e are marks in five subjects and f is the full marks in each subject"<<endl;

	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cin>>e;
	cin>>f;

//conversion formulae
	
	total=a+b+c+d+e;
	average=total/5;
	percentage=average*100/f;

//result
	cout<<"You have got "<<a<<", "<<b<<", "<<c<<", "<<d<<", "<<e<<" out of "<<f<<endl;
	cout<<"Your Total Marks = "<<total<<endl;
	cout<<"Average Marks = "<<average<<endl;
	cout<<"Percentage Marks = "<<percentage<<endl;
return 0;
	}
