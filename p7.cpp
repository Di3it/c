#include<iostream>
using namespace std;

int factorial(int f)
{
    if (f<=1)
    {
        return 1;
    }
    

    return f *factorial(f-1);

}
int main()
{
    int a;
    cout<<"enter a nummber which you want factorial"<<endl;
    cin>>a;

    cout<<"the factorial of that number is "<<factorial(a)<<endl;
    return 0;
}