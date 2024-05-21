#include<iostream>
using namespace std;
class AddAmount
{
    public:
           int amount;
           void deposit()
           {
               amount=500;
               cout<<amount;
           }
           void deposit(int a)
           {
               amount=500+a;
               cout<<amount;
           }
};
int main()
{
    int amt;
    AddAmount d1;
    cout<<"\n amount initially in bank:500";
    cout<<"\n Enter amount to deposit:";
    cin>>amt;
    cout<<"\n Amount in bank without using parameter Rs:";
    d1.deposit();
    cout<<"\n Amount in bank after deposit the amount is Rs:";
    d1.deposit(amt);
    cout<<"\n finally total ammount in piggy bank:";
    d1.deposit(amt);
    return 0;
}
