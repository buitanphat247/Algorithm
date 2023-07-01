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
        reverse(s.begin(),s.end());
        long long tmp=stoll(s);
        if(__gcd(n,tmp)==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
