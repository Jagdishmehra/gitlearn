#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    for(int i=0;i<5;i++)
    {
        int element; //if here we want to take input as similar to array then we
        //first need to specify the number of elements while declaring vector.
        cin>>element; 
        v.push_back(element);
    }
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.insert(v.begin()+1,5);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+4,10);
    cout<<"capacity: "<<v.capacity()<<endl;
    // for each loop
    for(int ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+1,45);
    v.insert(v.begin()+2,45);
    cout<<"capacity: "<<v.capacity()<<endl;
//while loop
    int i=0; //index for iterating inside the vector
    while(i<v.size())
    {
        cout<<v[i++]<<" ";
    }


}