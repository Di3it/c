#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int f = 1; f <= n-1; f++)
       
   {
     
    for (int d = 1; d <= f-1; d++)
    {
    
    cout<<"*";
    }
   
    cout<<endl;
   }
    for (int i = 1; i <= n; i++)
    {
       
        for (int l = 1; l <= (n - i + 1) ; l++)
        {      
        cout<<"*";
        }
            cout<<endl;

    }
    
return 0;
}