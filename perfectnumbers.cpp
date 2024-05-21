#include<iostream>
using namespace std;
int main()
{
	int i,j,n, range1,range2;
	cout<<"enter the range";
	cin>>range1>>range2;
	for(j=range1;j<range2;j++)
	{
		int sum=0;
		for(i=1;i<j;i++)
		{
			if(j%i==0)
			{
				sum=sum+i;
			}
		}
		if(sum==j)
		{
			cout<<j<<" ";
		}
	}
	return 0;
}
