#include<iostream>
using namespace std;
int main()
{
	char oper;
	float a,b;
	cout<<"enter two numbers";
	cin>>a>>b;
	cout<<"enter any operator(+,-,*,/)";
	cin>>oper;
	switch (oper){
		case'+':
			cout<<a<<"+"<<b<<"="<<a+b;
			break;
		case'-':
		    cout<<a<<"-"<<b<<"="<<a-b;
			break;
		case'*':
		    cout<<a<<"*"<<b<<"="<<a*b;
			break;
		case'/':
		    cout<<a<<"/"<<b<<"="<<a/b;
			break;
		default:
		    cout<<"invalid input";
			break;	
	}
	return 0;
}
