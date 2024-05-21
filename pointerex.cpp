#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,m,n,o,p,sum,sub,mul;
	double x,y,c,d,div,result;
	char choice;
	cout<<"enter your choice";
	cin>>choice;
	switch(choice){
	case'+':
			cout<<"enter the values of a and b";
			cin>>a>>b;
			sum=a+b;
			cout<<"addition:"<<sum;
			break;
	case'-':
			cout<<"enter the values of m and n";
			cin>>m>>n;
			sub=m-n;
			cout<<"subtraction:"<<sub;
			break;
	case'*':
			cout<<"enter the values of o and p";
			cin>>o>>p;
			mul=o*p;
			cout<<"multiplication:"<<mul;
			break;
	case'/':
			cout<<"enter the values of x and y";
			cin>>x>>y;
			div=x/y;
			cout<<"division:"<<div;
			break;
	case'^':
			cout<<"enter the values of c and d";
			cin>>c>>d;
			result=pow(c,d);
			cout<<"power:"<<result;
			break;
	default:
		cout<<"invalid output";
		break;
    }
	return 0;
}
