#include<iostream>
using namespace std;
int main()
{
int age;
cout<<"tell me your age"<<endl;
cin>>age;
// SELECTION CONTROL STRUCTURE : IF-ELSE LADDER
// if(age<18)
// {
// cout<<"you can not come to"<<endl;
// }
// else if(age==18)
// {
//     cout<<"you are akid pass boy"<<endl;
// }
// else{
//     cout<<"tou can come to the party"<<endl;
// }
// SELECTION CONTROL STRUCTURE : SWTICH CASE STATMENT
switch (age)
{
case 18:
cout<<"you are 18"<<endl;
break;
case 33:
cout<<"youa re 33"<<endl;
break;
case 12:
cout<<"you are 12"<<endl;
break;
default:
cout<<"no special case"<<endl;
break;








}
return 0;


}