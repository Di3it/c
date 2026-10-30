#include<iostream>
using namespace std;

int sumN(int n)
{
    if (n<=0)
    {
        return 0;
    }
    

    return n + sumN(n-1);
}
int main()
{
    int a;
    cout<<"enter a number till you want sum of it "<<endl;
    cin>>a;
    cout<<"the sum of the natural numbers you want till"<<sumN(a)<<endl;
    return 0;
}