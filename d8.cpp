#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
// int a = 35;
// cout<<"the value of a was"<<a;
// a = 45;
// cout<<"the value of a is"<<a;
//WE CAN CHANGE THE VALUE IN ANY FLOAT INT CHAR ANY WE CAN CHANGE



         //****************CONSTANS IN C++*****************
//const int a = 3;
//a = 45; // YOU WILL GET AN ERROR BECAUSE OF THIS A IS A CONSTANT
//cout<<"the value of a is "<<a;
//ERROR WILL OCCUR WITH THIS PROGRAMM SO CONSTANTS ARE MADE FOR NO FUTHER MISTAKES
//WE CAN DO SAME FOR FLOAT CHAR INT AND MORE AND IF NO CONST THE PROGRAMM WILL RUN


//*******************MAINUPLATORS****************** */

int a =3, b =233, c =4555;
cout<<"the vlaue of a without setw is : "<<a<<endl;
cout<<"the value of b without setw is : "<<b<<endl;
cout<<"the value of c without setw is :"<<c<<endl;

cout<<"the value of a : "<<setw(0)<<a<<endl;
cout<<"the value of b : "<<setw(4)<<b<<endl;
cout<<"the value of c : "<<setw(9)<<c<<endl;


// OPERATORS PRECENDENCE IN C++
//PRECEDENCE MEANS WHICH OPERATOR IS GOING EVALUATE TO ACT FIRST
//THE OPERATORS WHICH ACTS FIRST CLOSE THAT WITH BRACKET ()
// int a =3, b =4;
// int c = ((((a*5)+b)-45)+87);
// cout<<c;
return 0;
}