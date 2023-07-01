#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
long long powmod_3(long long a,long long b)
{
    long long res=1;
    while(b)
    {
        if(b%2==1)
        {
            res*=a;
            res%=mod;
        }
        a*=a;
        a%=mod;
        b/=2;
    }
    return res;
}
int main()
{
    long long a,b;
    cin>>a>>b;
    cout<<powmod_3(a,b)<<endl;
}
