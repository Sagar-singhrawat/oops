#include <iostream>
using namespace std;
int main()
{
int n, c = 1;
     cout << "Enter the size of the array - ";
cin >> n;
int a[n];
int currentSum = 0;
int maxSum = 0;
int maxSumIndex = 0;
   cout << "Enter the array elements - " << endl;
       for (int i = 0; i < n; i++){

         cin >> a[i];
}
for (int i = 0; i < n; i++)
{
for (int j = i; n - j >= c; j += c - 1)
{
for (int k = j; k < j + c; k++)
{
currentSum += a[k];
}
c++;
}
c = 1;
if (currentSum > maxSum){
maxSum = currentSum;


maxSumIndex = i;
}
currentSum = 0;
}
cout << "The Maximum Sum is -" << "\n"<< maxSum << endl;
}
