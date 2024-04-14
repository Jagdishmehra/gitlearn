#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v(6);
    for(int i=0;i<6;i++)
    {
        cin>>v[i];
    }
    int i;
    int sum=0;
    int diff=0;
    for(i=0;i<6;i++)
    {
        if(v[i]%2==0)
        {
            sum+=v[i];
        }
        else
        {
            diff+=v[i];
        }
    }
    cout<<max(sum,diff)-min(sum,diff)<<endl;
}