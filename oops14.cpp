#include<iostream>
using namespace std;
class complex{
    private:
     double real;
     double imag;

    public:
    complex(){
        real=0;
        imag=0;
    }
     complex(double real,double imag){
        this->real=real;
        this->imag=imag;
     }
     void show(){
        cout<<"\nthe complex quantity is:\n"<<endl;
        cout<<real<<"";
        cout<<"+"<<imag<<"i"<<endl;

     }
    complex operator+(complex c2){
        this->real=real+c2.real;
        this->imag=imag+c2.imag;
        cout<<"\nthe resultant complex number is:\n"<<endl;
        cout<<real<<"";
        cout<<"+"<<imag<<"i"<<endl;
    }
       
       complex operator-(complex c2){
        this->real=real-c2.real;
        this->imag=imag-c2.imag;
        cout<<"\nthe resultant complex number is:\n"<<endl;
        cout<<real<<"";
        cout<<"+"<<imag<<"i"<<endl;
       }
       
       complex operator=(complex c2){
        if((real==c2.real) && (imag==c2.imag)){
        
        cout<<"\nthe resultant complex number is:"<<endl;
        cout<<"\nEQUAL"<<"\t";
       
        }
        else{
             cout<<"\nthe resultant complex number is:"<<endl;
              cout<<"\n not EQUAL"<<"\t";

        }
        }

};
int main(){
    complex c1(6.5,4);
    c1.show();

    complex c2(7.8,4);
    c2.show();
    
    complex c3,c4;
    c3=c1+c2;
    c4=c1-c2;
    c1=c2;
    

}
