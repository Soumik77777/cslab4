//first include the library
#include<iostream>
using namespace std;

//converting Celcius into Fahrenheit
int main ()

//process
	{

//declare the main function
	double celcius,fahrenheit;

/*celcius is the temperature in celcius to be inputted by user
fahrenheit is the converted temperature to fahrenheit*/

	cout<<"Please input temperature in celcius :"<<endl;

//conversion formulae
	cin>>celcius;
	
	fahrenheit=(celcius*9/5)+32;

//result
	cout<<"The input temperature is "<<celcius<<" degree celcius"<<endl;
	cout<<"In fahrenheit it is "<<fahrenheit<<" degree fahrenheit"<<endl;

return 0;
	}
