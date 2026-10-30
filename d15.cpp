#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
//THIS WILL NOT SWAP A AND B
//BUT WE CAN SWAP USING swapPointer function
void swap(int a , int b)
{
    int temp = a;
    a=b;
    b=temp;
}
//THIS IS ALSO KNOW AS REFRENCE USING POINTERS
void swapPointer(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b=temp;
}
//CALL BY REFRENCE USING C++ REFRENCE VARIABLES
void swapRefrenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a=4, b=5;
    //cout<<"the value of 4 and 5 is"<<sum(a,b);
    // swap(a,b);
    cout<<"the value of a is"<<a<<"and the value of b is"<<b<<endl;
    // swapPointer(&a,& b);
    // swapRefrenceVar(a, b) = 765; //THIS WILL SWAP A AND B USING REFRENCE VARIABLES 
    swapRefrenceVar(a, b);
    cout<<"the value a is "<<a<<"and value of b is"<<b<<endl;
    

    return 0;
}