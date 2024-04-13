#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    for(int i=0;i<6;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int x;
    cout<<"enter num to check last occurance: ";
    cin>>x;
   for(int i=v.size();i>=0;i--)
    {
        if(v[i]==x)
        {
            cout<<"last occurance of x: "<<i<<" "<<endl;
            break;
        }
    }
}