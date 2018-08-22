//first include the library
#include<iostream>
#include<cmath>

using namespace std;

//Calculating compound interest
int main()
	{

//declare the main function
	double principal,rate,time,no,calc1,interest,total;

//determining compound interest from the given values

	cout<<"Please input the values of Principal amount in rs., rate of interest per year, time in years, number of times in a year that interest in compounded"<<endl;
	cout<<"e.g. P r T n (remember to exclude percentage sign)"<<endl;

	cin>>principal;
	cin>>rate;
	cin>>time;
	cin>>no;

//conversion formula

	calc1=pow(((rate/no)+1), time*no);
	total=calc1*principal;
	interest=total-principal;

//result

	cout<<"Compound Interest = "<<interest<<" rs."<<endl;
	cout<<"Total = "<<total<<" rs."<<endl;

return 0;
	}
