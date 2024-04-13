#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(6);
    for(int i=0;i<6;i++)
    {
        cin>>v[i];
    }
    bool f=1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i]<v[i-1])
        {
           
            f=0;
        }
    }
    cout<<f<<endl;
}