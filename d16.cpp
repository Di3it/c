#include<iostream>
using namespace std;

inline int product(int a , int b) // INLINE ONLY IN SIMPLE PROGRAM 
{
    // static int c= 0; //THIS EXCEUTES ONLY ONCE IT WILL NOT FORGOT
    // c = c+1; // NEXT TIME THIS FUNCTION IS RUN THE VAUE OF C WILL BE RETAINED
return a*b; // NOT RECOMMENDEDD TO USE BELOW LINES WITH INLINE FUNCTION ALSO WITH STATIC FUNCTION
//return a*b+c;
}
float moneyReceived(int currentMoney , float factor=1.04)
{
    return currentMoney * factor;
}

int main()

{
    int a,b;
    // cout<<"enter two value of a and b";
    // cin>>a>>b;
//     cout<<"the product of two value a and b is "<<product(a,b);
int money = 1000000;
cout<<"if you have "<<money<<"Rs in your bank account you will revice"<<moneyReceived(money, 1.04F)<<"Rs after 1 year";


 return 0;

}