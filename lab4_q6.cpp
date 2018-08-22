//first include the library
#include<iostream>
using namespace std;

//Determining area of a triangle
int main()
	{

//declare the main function
	double base,height,area;

/*Base and heights of a triangle are to be given by the user
Area is to be determined*/

	cout<<"Please input the values of Base and Height of your triangle"<<endl;
	cout<<"e.g. a b"<<endl;

	cin>>base;
	cin>>height;

//conversion formula

	area=base*height/2;

//result

	cout<<"If the Base and Height of a triangle are "<<base<<" unit and "<<height<<" unit,"<<endl;
	cout<<"Then it's area is "<<area<<" square unit."<<endl;

return 0;
	}
