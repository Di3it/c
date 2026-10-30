#include<iostream>
using namespace std;
int main()
{
    int count = 0;
    int n;
    cin >> n;                 // 1. read the size FIRST
    int arr[1000];             // 2. then make the array (fixed size for now)
    for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}
for (int i = 0; i < n; i++)
{
    if ( arr[i]%2 != 0 )
    {
       count++;
      
    }
    
}

cout<< count;

return count;
}