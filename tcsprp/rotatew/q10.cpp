#include<iostream>
#include<vector>
using namespace std;
void sortvect(vector<int> &v)
{
    int l=0;int r=v.size()-1;
    while (l<r)
    {
        if(v[l]==1 &&v[r]==0)
        {
            v[l]=0;v[r]=1;;
            l++;
            r--;
        }
        if(v[l]==0)
        {
            l++;
        }
        if(v[r]==1)
        {
            r--;
        }
    }
    
}
int main()
{
    vector<int > v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int e; cin>>e;
        v.push_back(e);
    }
    sortvect(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
}