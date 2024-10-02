#include<iostream>
using namespace std;
class hotel{
    private:
        int rno,NOD,tariff;
        string name;
        int calc()
           {
             int x;
             x=NOD*tariff;
             if(x>10000){
                return(x*1.05);
               }
              return x;
           }
    public:
        void checkin(int rno,int NOD,int tariff,string name)
       {
       this->rno=rno;
       this->NOD=NOD;
        this->tariff=tariff;
        this->name=name;
        }
       void checkout(){

        cout<<"Roomno:"<<rno<<"\nNo of days:"
       <<NOD<<"\nTariffin:"<<tariff<<"\nName:"<<name<<"\nAmount:"<<calc()<<endl;
          }
};
int main()
{
hotel h1;
h1.checkin(4000,678,90,"Sagar singh rawat");
h1.checkout();
}
