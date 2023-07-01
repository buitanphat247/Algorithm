#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    long long f[s.size()+100]={0},cnt=0;
    for(long long i=1;i<s.size();i++)
    {
        f[i]=f[i-1];
        if(s[i]=='('&&s[i-1]=='(')
            f[i]++;
    }
    for(long long i=1;i<s.size();i++)
    {
        if(s[i]==')'&&s[i-1]==')')
            cnt+=f[i];
    }
    cout<<cnt<<endl;
}
