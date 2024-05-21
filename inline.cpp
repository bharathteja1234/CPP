#include<iostream>
using namespace std;
inline int sum(int a,int b)
{
	return(a+b);
}
inline int sub(int a,int b)
{
	return(a-b);
}
inline int mul(int a,int b)
{
	return(a*b);
}
inline float div(float a,float b)
{
	return(a/b);
}
int main()
{
	int a,b;
	cout<<"enter the value of a,b";
	cin>>a>>b;
	cout<<"addition="<<sum(a,b)<<endl;
	cout<<"subtraction="<<sub(a,b)<<endl;
	cout<<"multiplication="<<mul(a,b)<<endl;
	cout<<"division="<<div(a,b)<<endl;
	return 0;
}
