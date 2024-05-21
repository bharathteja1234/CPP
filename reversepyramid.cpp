#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cout<<"enter the number of rows";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		for(j=0;j<=n-i ;j++)
		{
			cout<<" ";
		}
		for(k=0;k<i*2-1;k++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
