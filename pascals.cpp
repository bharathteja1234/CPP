#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cout<<"enter the number of rows to be printed";
	cin>>n;
	cout<<endl;
	for(i=0;i<n;i++)
	{
		int val=1;
		for(j=1;j<(n-i);j++)
		{
			cout<<"   ";
		}
		for(k=0;k<=i;k++)
		{
			cout<<val<<"      ";
			val=val*(i-k)/(k+1);
		}
		cout<<endl<<endl;
	}
	cout<<endl;
	return 0;
}
