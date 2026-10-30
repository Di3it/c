#include<iostream>
using namespace std;
int main()
{

/*LOOPS IN C++
THERE ARE THREE TYPES OF LOOP IN C++:
1. FOR LOOP
2. WHILE LOOP
3. DO-WHILE LOOP
*/
/*FOR LOOP IN C++*/
//SYNTAX FOR  for LOOP
//for(initialization; condition; updation)
//{
// loop body(C++ code);
//}
// for(int i = 0; i<101; i++)
// {
//     cout<<i<<endl;

// }

/*WHILE LOOP */
//SYNTAX :
// while(condition):
//{
// C++ STATMENTS;
//}
//PRITING 1 TO 40 USING WHILE LOOP
// 
// int i = 1;
// while(i<=40)
// {

//     cout<<i<<endl;
//     i++;

// }
//INFINITE LOOP IN while loop
// int i=1;
// while(true)
// {

//     cout<<i<<endl;
//     i++;

// }
// DO WHILE LOOP
//IN DO WHILE LOOP THE LOOP WILL SURELY WORK WETHER THE CONDITION IS TRUE OE FALSE
int i=1;
do
{
    cout<<i<<endl;
    i++;
}
while(i<=40);
    return 0;
}