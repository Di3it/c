#include<iostream>
using namespace std;
int main()
{
    int lastdigit;
    int n;
    int total = 0;
    cin>>n;
 while (n>0)
 {
    lastdigit = n%10;
    total = total + 1;
    n = n/10;
   
 }

 cout<< total;
    return 0;
}