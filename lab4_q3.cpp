//first include the library
#include<iostream>
using namespace std;

//converting Fahrenheit into Celcius
int main ()

//process
	{

//declare the main function
	double fahrenheit,celcius;

/*fahrenheit is the temperature in celcius to be inputted by user
celcius is the converted temperature to fahrenheit*/

	cout<<"Please input temperature in fahrenheit :"<<endl;

//conversion formulae
	cin>>fahrenheit;
	
	celcius=(fahrenheit-32)*5/9;

//result
	cout<<"The input temperature is "<<fahrenheit<<" degree fahrenheit"<<endl;
	cout<<"In celcius scale it is "<<celcius<<" degree celcius"<<endl;

return 0;
	}
