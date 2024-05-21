#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k;
	cout<<"enter the number of rows";
	cin>>n;
	for(i=1;i<=n;i++)
	{
			for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		  for(k=0;k<i*2+1;k++)
		  {
		    cout<<"*";	
		  }
		  
		cout<<" \n";
	}
	return 0;
}
