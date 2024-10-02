#include <iostream>
#include <algorithm>
using namespace std;
int main() {
string s1;
cout<<"Enter the string: ";
getline(cin,s1);
int x=s1.length();
for(int i=0;i<x;i++){
      int k=0;
      if (s1[i]!='#'){
     for (int j=i+1;j<x;j++){
      if (s1[i]==s1[j] && s1[i]!=' '){
       s1[j]='#';
            k=1;
}
}
}
if(k==1){
    s1[i]='#';
}
}
sort(s1.begin(),s1.end());
for (int i=0;i<x;i++) {
   if (s1[i]!='#'&&s1[i]!=' '){
       cout<<s1[i]<<" ";
}
}
cout<<endl;
}
