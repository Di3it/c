#include<iostream>
using namespace std;
int c = 45;

int main()
{
// int a, b, c;
// cout<<"enter value of a:"<<endl;
// cin>>a;
// cout<<"enter the value of b:"<<endl;
// cin>>b;
// c= a + b;
// cout<<"the sum is"<<c;
// cout<<"the global c is :"<<::c;
// :: THIS IS A SCOPE RESOLUTION OPERATOR WHICH GIVES THE VALUE OF GOLBAL VARIABLE



//*******LITERALS FLOAT,DOUBLE,LONG DOUBLE *************************/


// float d = 34.4f;
// long double e = 34.4l;
// cout<<"the size of 34.4 is"<<sizeof(34.4)<<endl;
// cout<<"the size of 34.4f is"<<sizeof(34.4f)<<endl;
// cout<<"the size of 34.4l is"<<sizeof(34.4l)<<endl;
// cout<<"the value of d is"<<d<<endl<<"the value of e is"<<e;
//WE CAN JOIN TWO COUT IN ONE LINE ONLY IN C++


// ************************REFERNCE VARIABLE***************
// ONE PERSON WITH DIFFRENT NAME SAME OR OTHER USE
// float x = 455;
// float & y = x;
// cout<<x<<endl;
// cout<<y<<endl;

//**************************TYPE CASTING ******************/
// CHANGING ONE VARIABLE TO OTHER
int a = 45;
float b = 45.5;
cout<<"the value of a is "<<(float)a<<endl;
cout<<"the value of a is"<<float(a)<<endl;
cout<<"the value of b is"<<(int)b<<endl;
cout<<"the value of b is"<<int(b)<<endl;

int c  = int(b);
cout<<"the expression is"<<a + b<<endl;
cout<<"the expression is"<<a + int(b)<<endl;
cout<<"the expression is"<<a + (int)b<<endl;


return 0;





}

