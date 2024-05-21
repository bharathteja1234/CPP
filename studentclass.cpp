#include<iostream>
using namespace std;
class student
{
	private:
		int student_marks,roll_number;
		char grade,student_name;
	public:
		void getdetails(void);
		void calculate(void);
};
void student::getdetails(void)
{
	cout<<"enter Student's roll number";
	cin>>roll_number;
	cout<<"enter student name";
	cin>>student_name;
	cout<<"enter student marks";
	cin>>student_marks;
}
void student::calculate(void)
{
	if(student_marks>=90)
	{
		cout<<"A grade";
	}
	else if(90>student_marks>80)
	{
		cout<<"B grade";
	}
	else
	{
		cout<<"C grade";
	}
}
int main()
{
	student std;
	std.getdetails();
	std.calculate();
	return 0;
}
