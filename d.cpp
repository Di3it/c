#include<iostream>
using namespace std;
int main()
{
// WHAT IS A POINTER? --> DATA TYPE WHICH HOLDS THE ADDRESS OF OTHERS DATA TYPES 
 
int a=3;
int* b = &a;
b = &a;
// &----> (Address of) operator
cout<<"the address of a is "<<&a<<endl;
cout<<"the address of a is "<<b<<endl;

// *----> (VALUE AT)Dereferncing of operator
cout<<"the value at address b is "<<*b<<endl;

//POINTER TO POINTER
int** c = &b;
cout<<"the address of b is "<<&b<<endl;
cout<<"the address of b is "<<c<<endl;
cout<<"the value at address c is"<<*c<<endl;
cout<<"the value of address value_at(value _At(c)) is"<<**c<<endl;

return 0;

}
