#include<bits/stdc++.h>
using namespace std;
const long long mod=1e18;
int main()
{
    long double n;
    cin>>n;
    while(n--)
    {
        long long t;
        cin>>t;
        long long tmp=ceil(pow(t, 1.0/3));
        if(tmp*tmp*tmp==t)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
