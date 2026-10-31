#include<iostream>
using namespace std;
int main()
{
    int lastdigit;
    int n;
    int total = 0;
    cin>>n;
    if (n==0)
    {
      cout<<0;
      return 0;
    }
    
 while (n>0)
 {
   if (n%2==1)
   {
      lastdigit = n%10;
      total = total +1;
   }
   
    n = n/10;   
    
 }
 
 cout<<total;
    return 0;
}