#include<iostream>
using namespace std;
int main()
{
int num[4] = {10, 20, 20, 5};
int largest = num[0];
int secondLargest = num[1];
int i;
if (secondLargest > largest)
{
    int temp = largest;
    largest = secondLargest;
    secondLargest = temp;
}
for (i = 2; i < 4; i++)
{
    if (num[i] > largest)
    {
        secondLargest = largest;
        largest = num[i];
    }
    else if (num[i] > secondLargest && num[i] != largest)
    {
        secondLargest = num[i];

    }
    else
    {
        largest != secondLargest ;
    }
    
    
}
cout<<"this is the largest: "<<largest<<endl;
cout<<"this is secondlargest: "<<secondLargest<<endl;
return 0;
}