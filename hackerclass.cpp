#include<iostream>
using namespace std;
class student
{
    private:
        int age,standard;
        char first_name[20],last_name[20];
    public:
        void getdetails(void);
        void putdetails(void);
};
void student::getdetails(void)
{
   cin>>age;
   cin>>first_name;
   cin>>last_name;
   cin>>standard;
}
void student::putdetails(void)
{
    cout<<age<<endl;
    cout<<last_name<<","<<first_name<<endl;
    cout<<standard<<endl;
    cout<<endl;
    cout<<age<<","<<first_name<<","<<last_name<<","<<standard<<endl;
}
int main()
{
    student s;
    s.getdetails();
    s.putdetails();
    return 0;
}
