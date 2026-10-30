#include<iostream>
#include<string>
using namespace std;
string reverseString(string s)
{
    int front = 0;
    int back = s.length() -1;
    while (front < back)
{
    int  temp = s[front];
    s[front] = s[back];
    s[back] = temp;
front++;
--back;
}
    return s;
}
int main()
{
    string s;
    cout<<"enter a word"<<endl;
    cin>>s;
    cout<<"the reverse of these word is"<<reverseString(s)<<endl;
    return 0;
    
}