#include<iostream>
using namespace std;

class time{
    int hours;
    int minutes;
    int second;
    
    public:
    void puttime(int h,int m,int s){
        hours=h;
        minutes=m;
        second=s;

    }
    void getvalues(void){
         cout<<" time will be"<<endl;
        cout<<"hours:-"<<hours<<endl;
        cout<<"minutes:-"<<minutes<<endl;
        cout<<"second:-"<<second<<endl;
    }

    void timesum(time t1,time t2){
        int m1,h1;
        m1=(t1.second+t2.second)/60;
        second=(t1.second+t2.second)%60;
       minutes =((t1.minutes+t2.minutes)+m1)%60;
       h1=((t1.minutes+t2.minutes)+m1)/60;
       hours=t1.hours+t2.hours+h1;
       
    }

    void timesum_show(void){
        cout<<"sum of time will be"<<endl;
        cout<<"hours:-"<<hours<<endl;
        cout<<"minutes:-"<<minutes<<endl;
        cout<<"second:-"<<second<<endl;
        cout<<hours<<":"<<minutes<<":"<<second<<":"<<endl;
        


    }

}t1,t2,t3;
int main(){
     time t1;
     time t2;
     time t3;
     cout<<"the time of first station is"<<endl;
     t1.puttime(20,20,58);
     t1.getvalues();
     cout<<"the time of second station is"<<endl;
     t2.puttime(5,59,59);
      t2.getvalues();
      t3.timesum(t1,t2);
      t3.timesum_show();

}
