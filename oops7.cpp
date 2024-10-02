#include<iostream>
using namespace std;
class bank{
          private:
             int acno,balance;
             string name,actype;
             public:
             void initial(int acno,int balance,string name,string actype)
             {
             this->acno=acno;
             this->balance=balance;
             this->name=name;
             this->actype=actype;
             }
             void deposit(int amount)
             {
             this->balance+=amount;
             }
             void withdraw(int amount)
             {
             balance=balance-amount;
             if(balance<0){
             cout<<"Not enough balance"<<endl;
              
            }
            else{
                cout<<"--withdraw successfully---"<<endl;
            }
             }
              
              void display(){
               cout<<"------your bank details are---------"<<endl;
              cout<<"Name-"<<name<<"\nBalance-"<<balance<<endl;
              }
};
int main()
{
int n,acno,amt,dep,rem;
string name,type;
cout<<"Enter the total no.  of users:";
cin>>n;
bank b[n];
for(int i=0;i<n;i++)
{
cout<<"Enter account no:";
cin>>acno;
cout<<"Enter balance amount:";
cin>>amt;
cout<<"Enter name:";
cin>>name;
cout<<"Enter account type:";
cin>>type;
cout<<"Enter amount to deposit:";
cin>>dep;
cout<<"Enter amount to withdraw : ";
cin>>rem;
b[i].initial(acno,amt,name,type);
b[i].deposit(dep);
b[i].withdraw(rem);
b[i].display();
}
}             
