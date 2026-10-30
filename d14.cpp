#include<iostream>
using namespace std;
//FUNCTION PROTOTYPE
//type function-name (arguments);
// int sum(int a, int b ); -----> ACCEPTABLE FORMAT
// int sum(int a , b); ---------> NOT ACCEPTABLE
// int sum(int, int ); ---------> ACCEPTABLE
// void g(void); ---------------> ACCEPTABLE
// void g(); ------------------> ACCEPTABLE



int main()
{
    int num1, num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;
    cout<<"the sum of num1 and num2 is "<<sum(num1 , num2);
    return 0;


}
//IT WILL SHOW NO RESULT BECAUDE IT IS NOT DEFINED
//SO FOR THESE WE CAN USE PROTOTYPE FUNCTUION IT 
//WILL FIND THE SUM FROM ANYWHERE IN THE FUNCTION
int sum(int a , int b)
{
    int c = a+b;
    return c;
}
void g()
{
    cout<<"hello good morning dih";
}