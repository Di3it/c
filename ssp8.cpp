#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int f = 1; f <= n; f++)
       
   {
      for(int q = 1; q<= n-f; q++)
    {
        cout<<" ";
    }
    for (int d = 1; d <= 2*f-1; d++)
    {
    
    cout<<"*";
    }
   
    cout<<endl;
   }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - (n - i + 1); j++)
        {
            cout<<" ";
        }
        for (int l = 1; l <= 2*(n - i + 1) - 1; l++)
        {
          
        cout<<"*";
        }
        
       
       
        
        cout<<endl;

    }
    
return 0;
}