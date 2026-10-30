#include<iostream>
#include<vector>
using namespace std;
template < class T>
void display(vector<int> &v)
{
    for (int i = 0; i < v.size() ; i++)
    {
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    
}
int main()
{
    vector<int> vec1;   
    vector<char> vec2(4);
    vector<char> vec3(vec2);
    vector<int> v(6,3);

    int ele , size =5;
    // cout<<"enter the size of vector you want"<<endl;
    // cin>>size;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"enter an element to add to this vector "  ;
    //     cin>>ele;
    //     vec1.push_back(ele);
    // }
   // vec1.pop_back(); 
   
   display(vec1);
vector<int> :: iterator iter = vec1.begin();
//vec1.insert(iter+1, 565);
   display(vec1);
    
    return 0;
}