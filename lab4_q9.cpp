//first include the library
#include<iostream>
using namespace std;

//Calculating simple interest
int main()
	{

//declare the main function
	double principal,rate,time,interest,total;

/*side of an equilateral triangle is to be given by the user
Area is to be determined*/

	cout<<"Please input the values of Principal amount in rs., rate of interest per year, time in years"<<endl;
	cout<<"e.g. P r T"<<endl;

	cin>>principal;
	cin>>rate;
	cin>>time;

//conversion formula

	interest=principal*rate*time/100;
	total=principal + interest;

//result

	cout<<"Principal amount = "<<principal<<" rs., rate of interest per year = "<<rate<<", time in years = "<<time<<endl;
	cout<<"Simple Interest = "<<interest<<" rs."<<endl;
	cout<<"Total = "<<total<<" rs."<<endl;

return 0;
	}
