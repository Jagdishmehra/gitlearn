#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxi=INT_MIN;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxi)
        {
            maxi=max(a[i],maxi);
            c++;
            cout<<a[i]<<" ";
        }
    }
    cout<<endl<<"count of elements:"<<c<<endl;
}