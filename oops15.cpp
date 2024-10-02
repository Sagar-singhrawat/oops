#include<iostream>
using namespace std;
class overload
{
private:
int x=10,y;
public:
overload(){}
overload(int x,int y)
{
this->x=x;
this->y=y;
}
void operator-()
{
this->x=-x;
this->y=-y;
}
void operator++() //pre increment
{
++x;
++y;
}
void operator++(int) //post increment
{
x++;
y++;
}
void operator--() //pre decrement
{
--x;
--y;
}
void operator--(int) //post decrement
{
x--;
y--;
}
void show()
{
cout<<"X="<<x<<" Y="<<y<<endl;
}
};
int main()
{
overload d1(11,28);
-(d1); //unary -
d1.show();
overload d2(6,18);
d2++; //post increment
d2.show();
d2--; //post decrement
d2.show();
++d2; //pre increment
d2.show();
--d2; //pre decrement
d2.show();
}
