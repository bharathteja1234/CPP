#include<iostream>
using namespace std;
student()
{
	int marks,roll_number;
	char student_name[20];
	cout <<"enter the name of the student";
	cin >> student_name;
	cout<<"enter the roll_number";
	cin>>roll_number;
	cout<<"enter your marks";
	cin>>marks;
	if(marks>=90)
	{
		cout<<"A grade";
	}
	else if(90>marks>80)
	{
		cout<<"B grade";
	}
	else
	{
		cout<<"C grade";
	}
};
int main()
{
	student();
	return 0;
}
