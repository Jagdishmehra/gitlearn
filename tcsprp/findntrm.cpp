#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2!=0)
    {
        cout<<pow(2,(n/2))<<endl;
    }
    else
    {
        cout<<pow(3,(n/2)-1)<<endl;
    }
}