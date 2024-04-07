#include<iostream>
#include<string.h>
using namespace std;
string rmv(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans=rmv(s.substr(1));
    if(ch==ans[0])
    {
        return ans;
    }
    else
    {
        return ch+ans;
    }
}
int main()
{
    cout<<rmv("aabbbccdd");
}