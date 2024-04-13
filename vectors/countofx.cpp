#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(6);
    int i=0;
    while(i<v.size())
    {
        cin>>v[i++];
    }
    int c=0;int x;
    cin>>x;
    for(i=0;i<v.size();i++)
    {
        if(v[i]==x)
        {
            c++;
        }
    }
    cout<<c<<endl;

}