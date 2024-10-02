#include<iostream>
using namespace std;
class bank
{
private:
int totalamount=2000;
public:
void deposit(int amount)
{
totalamount+=amount;
}
void withdraw(int amount)
{
totalamount-=amount;
if(totalamount<0)
{
totalamount=0;
}
}
void show()
{
cout<<"\nTotal amount left:->"<<totalamount<<endl;
}
};
int main(){
int dep,wit;
bank b1;
cout<<"Enter amount to deposit:";
cin>>dep;
b1.deposit(dep);
b1.show();
cout<<"Enter amount to withdraw:";
cin>>wit;
b1.withdraw(wit);
b1.show();
}
