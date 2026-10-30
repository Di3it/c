#include<iostream>
using namespace std;
typedef struct kam
//typedef is also used same but ep is required in it
{
    /* data */
    int id;
    char favChar;
    float salary;

} ep;
//FOR BETTER MEMORY UNION IS USED
union money
{
    int rice;
    char car;
    float pounds;

};

int main()
{
enum meal{breakfast , lunch , dinner };
meal m1 = lunch;
cout<<m1;
// cout<<breakfast<<endl;
// cout<<lunch<<endl;
// cout<<dinner<<endl;
// union money m1;
// m1.rice = 34;
// m1.car = 'c';
// cout<<m1.rice;
// ep uv;
// uv.id = 1;
// uv.favChar = 'c';
// uv.salary = 423524354;
// cout<<"the value is "<<uv.id<<endl; 
// cout<<"the value is "<<uv.favChar<<endl;
// cout<<"the value is"<<uv.salary<<endl;
return 0;



}