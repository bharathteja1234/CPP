#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value of n";
	cin>>n;
	while(n%2>0)
	{
		cout<<n;
		cin>>n;
	}
	return 0;
}
