//first include the library
#include<iostream>
using namespace std;

//conversion between length units
int main ()

//process
	{

//declare the main function
	double centimetrel,metrel,kilometrel;

/*centimetrel is the length in centimetre to be inputted by user
metrel is the converted length to metre
kilometrel is the converted length to kilometre*/

	cout<<"Please input length in centimetres:"<<endl;

//conversion formulae
	cin>>centimetrel;
	
	metrel=centimetrel/100;
	kilometrel=centimetrel/100000;

//result
	cout<<"The input length is "<<centimetrel<<" centimetres"<<endl;
	cout<<"It is equal to "<<metrel<<" metres"<<endl;
	cout<<"And is also equal to "<<kilometrel<<" kilometres"<<endl;

return 0;
	}
