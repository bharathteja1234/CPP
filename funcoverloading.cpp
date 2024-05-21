#include<iostream>
using namespace std;
int add(int a,int b)
{
	cout<<"function 1"<<endl;
	return(a+b);
}
double add (int a,double b)
{
	cout<<"function 2"<<endl;
	return (a+b);
}
double add(double a,int b)
{
	cout<<"function 3";
	return (a+b);
}
double add(double a,double b)
{
	cout<<"functiion 4"<<endl;
	return(a+b);
}
int main()
{
	cout<<"addition is"<<add(1,2)<<endl;
	cout<<"addition is"<<add(1,2.5)<<endl;
	cout<<"addition is"<<add(2.5,5)<<endl;
	cout<<"addition is"<<add(3.46,6.78)<<endl;
	return 0;
}
