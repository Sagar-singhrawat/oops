#include<iostream>
using namespace std;
class xyz
{
int x,y;
public:
xyz(){}
xyz(int x,int y)
{
this->x=x;
this->y=y;
}
void show()
{
cout<<"X="<<x<<" Y="<<y<<endl;
}
friend void operator -(xyz&d1);
friend void operator ++(xyz&);
friend void operator --(xyz&);
friend void operator ++(xyz&,int);
friend void operator --(xyz&,int);
};
void operator-(xyz &d1)
{
d1.x=(-d1.x);
d1.y=(-d1.y);
}
void operator ++(xyz&d1)
{
++(d1.x);
++(d1.y);
}
void operator ++(xyz&d1,int nouse)
{
(d1.x)++;
(d1.y)++;
}
void operator --(xyz&d1)
{
(d1.x)--;
(d1.y)--;
}
void operator --(xyz&d1,int nouse)
{
(d1.x)--;
(d1.y)--;
}
int main()
{
xyz a1(16,22);
-a1; //uniary -
a1.show();
xyz b1(9,8);
++b1; //pre increment
b1.show();
b1++; //post increment
b1.show();
--b1; //pre decrement
b1.show();
b1--; //post decrement
b1.show();
}
