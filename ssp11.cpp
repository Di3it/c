#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= i; j++)        // limit depends only on i
    {
        if ( (i + j) % 2 == 0 )         // use your corrected rule
        {
            cout << "1 " ;
        }
        else
        {
            cout << "0 " ;
        }
    }
    cout << endl;
}

    
    return 0;
}