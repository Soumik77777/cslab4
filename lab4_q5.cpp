//first include the library
#include<iostream>
using namespace std;

//Determination of third angle of a triangle
int main ()
	{

//declare the main function
	double angle1,angle2,angle3;

/*angle1 and angle2 are the two given two angles
angle3 is the required angle*/

	cout<<"Please input the values of any two angles of a triangle in degrees"<<endl;
	cout<<"e.g. A B"<<endl;
	cin>>angle1;
	cin>>angle2;

//conversion formula
	
	angle3=180-(angle1+angle2);

//result
	cout<<"If two of the angles of a triangle are "<<angle1<<" and "<<angle2<<endl;
	cout<<"Then the third angle is "<<angle3<<endl;

return 0;
	}
