#include<iostream>
using namespace std;
int main()
{
	int i,j=1,n;
	cout<<"enter the value of n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		j=j*i;

	}
	cout<<"the factorial of given number is"<<j;
	return 0;
	
}
