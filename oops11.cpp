#include <iostream>
using namespace std;
class ToolBooth {
public:
unsigned int cars;
double money;
ToolBooth() : cars(0), money(0) {}
void payingCar() {
cars++;
money += 0.5;
}
void nonPayingCar() {
cars++;
}
void display() {
cout << "Total cars: " << cars << endl;
cout << "Total money collected: " << money <<"rupees"<< endl;
}
};
int main() {
ToolBooth t;
int ch;
cout << "Enter '1' for paying car, '0' for non-paying car, or '9' to quit:\n";
while (ch!=9) {
cin>>ch;
switch (ch){
case 1:
t.payingCar();
break;
case 0:
t.nonPayingCar();
break;
case 9:
t.display();
return 0;
default:
cout << "Invalid input. Please enter '1', '0', or '9'.\n";
}
}
}
