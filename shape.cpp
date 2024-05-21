#include<iostream>
using namespace std;
int main()
{
	int n,j,i;
	cout<<"enter the number of rows";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			cout<<i<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
