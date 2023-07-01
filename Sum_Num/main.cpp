#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
    long long n;
    cin>>n;
    string s=to_string(n);
    long long sum=0;
    for(long long i=0;i<s.size();i++)
        sum+=s[i]-'0';
    cout<<sum<<endl;
    }
}
