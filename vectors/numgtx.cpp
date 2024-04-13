#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(6);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    int i=0;
    int x;int c=0;
    cin>>x;
    while(i<v.size())
    {
        if(v[i++]>x)
        c++;
    }
    cout<<c<<endl;
}