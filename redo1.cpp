#include<iostream>
using namespace std;
int main()
{
    int lastdigit;
    int total = 0;
    int n;
    cin>>n;
    if (n==0)
    {
        cout<<1;
        return 1;
    }
    while (n>0)
    {
        lastdigit = n%10;
        total = total +1;
        n = n/10;

        
    }
    cout<<total;
    return 0;
}