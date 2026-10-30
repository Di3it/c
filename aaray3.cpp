#include<iostream>
using namespace std;
int main()
{
    bool sorted = true;
    int n;
    int aar[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> aar[i];
    
    }
    for (int i = 0; i < n; i++)
    {
       cout<< aar[i] << " ";
    }    
    for (int i = 0; i < n-1; i++)
    {
       if (aar[i] > aar[i+1])
       {
        sorted = false;
       }
       
    }
    
 cout<< sorted << endl;


    return  sorted;
}