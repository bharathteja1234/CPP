#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,n,result;
	cout<<"enter the base value";
	cin>>x;
	cout<<"enter the power";
	cin>>n;
	result=pow(x,n);
	cout<<"The power is"<<result;
	return 0;
}
