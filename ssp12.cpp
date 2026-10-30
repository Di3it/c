#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n ; i++)
    {
    
        for (int j = 1; j <=i; j++)
        {
            cout<<j;
        }
        for (int l = 1; l <= 2 * (n-i); l++)
        {
            cout<<" ";
        }
        for (int q = i; q >= 1; q--)
        {
            cout<<q;
        }
        
        
cout<<endl;
    }
   return 0;
}