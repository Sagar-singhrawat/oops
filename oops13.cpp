#include<iostream>
using namespace std;
class SavingsAccount
{
private:
int savingbalance;
public:
int x;
static int annunalinterestrate;
void calculateMonthlyInterest()
{
x=(savingbalance*annunalinterestrate*0.01)/12;
x+=savingbalance;
}
static int modifyInterestRate(int newannunalinterestrate)
{
annunalinterestrate=newannunalinterestrate;
}
void setsavingbalance(int savingbalance)
{
this->savingbalance=savingbalance;
}
void display(string s)
{
cout<<s<<"New balance-->"<<x<<endl;
}
};
int SavingsAccount::annunalinterestrate=4;
int main()
{
SavingsAccount saver1;
saver1.setsavingbalance(5000);
SavingsAccount saver2;
saver2.setsavingbalance(9000);
cout<<"For 4 % interest rate:"<<endl;
saver1.calculateMonthlyInterest();
saver2.calculateMonthlyInterest();
saver1.display("Saver 1 ");
saver2.display("Saver 2 ");
SavingsAccount::modifyInterestRate(5);
cout<<"For 5 % interest rate:"<<endl;
saver1.calculateMonthlyInterest();
saver2.calculateMonthlyInterest();
saver1.display("Saver 1 ");
saver2.display("Saver 2 ");
}
