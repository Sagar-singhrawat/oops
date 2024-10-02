#include<iostream>
#include<math.h>
using namespace std;
int calculatearea(int l)
{
return l*l;
}
int calculatearea(int a,int b,int c)
{
int s=(a+b+c)/2;
int p=sqrt(abs((s*(s-a)*(s-b)*(s-c))));
return p;
}
int calculatearea(int l,int b)
{
return l*b;
}
int main()
{
cout<<"Area of rectangle:"<<calculatearea(19,21)<<endl;
cout<<"Area of triangle:"<<calculatearea(6,34,8)<<endl;
cout<<"AREA of square"<<calculatearea(15)<<endl;
}
