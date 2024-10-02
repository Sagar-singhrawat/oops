#include<iostream>
using namespace std;
class student
{
private:
int score[5];
public:
void input()
{
cout<<"Enter marks in five subjects:"<<endl;
for(int i=0;i<5;i++)
{
cin>>score[i];
}
}
int totalscore(){
    
int sum=0;
for(int i=0;i<5;i++)
{
sum=sum+score[i];
}
return sum;
}
};
int main()
{
int n;
cout<<"enter total no of students->"<<endl;
cin>>n;
student s[n];
int c=0;
for(int i=0;i<n;i++)
{
s[i].input();
}
for(int i=0;i<n;i++)
{
if(s[i].totalscore()>s[0].totalscore()){
    c+=1;
}
}
cout<<"no.of students score higher than first student ->"<<c<<endl;

}
