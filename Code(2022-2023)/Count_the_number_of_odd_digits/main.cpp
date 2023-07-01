#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long cnt=0;
    for(long long i=0;i<s.size();i++)
    {
        if((s[i]-'0')%2!=0)
            cnt++;
    }
    cout<<cnt<<endl;
}
