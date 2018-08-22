//first include the library
#include<iostream>
using namespace std;

//Determining area of an equilateral triangle
int main()
	{

//declare the main function
	double side,area;

/*side of an equilateral triangle is to be given by the user
Area is to be determined*/

	cout<<"Please input the value of length of a side of your equilateral triangle"<<endl;

	cin>>side;

//conversion formula

	area=0.43301270189*side*side;

//result

	cout<<"If the length of side of an equilateral triangle is "<<side<<" unit "<<endl;
	cout<<"Then it's area is "<<area<<" square unit."<<endl;

return 0;
	}
