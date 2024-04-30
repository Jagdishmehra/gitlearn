
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    
       int n;
       while(cin>>n)
       {
        v.push_back(n);
       }

    int k=2;
    k=k%5;
    reverse(v.begin(), v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

}