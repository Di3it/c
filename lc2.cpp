#include<iostream>
using namespace std;
int numb(int a , int b)
{
return (a,b);
}
int main()
{
    int numbs[4] = {1,2,3,4};
    
    for (int i = 0; i < 4; i++)
    {
        cout<<numbs[i]<<endl;
        
    }
    for (int j = 0; j < 4; j++)
        {
            cout<<numbs[j]<<endl;

 
        }
int result = numb(40,50);
 cout<<"result"<<result<<endl;
 
    
    return 0;
}