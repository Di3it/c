#include<iostream>
using namespace std;

int add(int a , int b)
{
    cout<<"using 2 arguments";
    return a+b;

}
int add(int a , int b , int c)
{
    cout<<"using three arguments";
    return a+b+c;

}

int volume(double r , int h)
{
    return (3.14 * r *r *h);

}
 int main()
{
    cout<<"the summ of 3 and 6 is "<<add(3,6)<<endl;
    cout<<"the sum of 3 6 and 7 is"<<add(3,6,7)<<endl;
    cout<<"the voulme of cylinder is of radius 3 and height 6 "<<volume(3,6)<<endl;
    return 0;
    
}