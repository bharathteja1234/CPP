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
    cout<<"enter the values of a,b";
    cin>>a>>b;
	return 0;
	
}
