//first include the library
#include<iostream>
using namespace std;

//converting days into years,weeks and days
int main ()

//process
	{

//declare the main function
	int days,years,modulus1,weeks,modulus2;

/*days is the total number of days given by user
the result is given in years,weeks,days*/

	cout<<"Please input number of days :"<<endl;

//conversion
	cin>>days;

	years=days/365;
	modulus1=days%365;
	weeks=modulus1/7;
	modulus2=modulus1%7;

//result
	cout<<days<<" days means "<<years<<" years "<<weeks<<" weeks "<<modulus2<<" days."<<endl;

return 0;
	}
