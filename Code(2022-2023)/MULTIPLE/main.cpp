#include <bits/stdc++.h>

using namespace std;
const long long mod=1e6;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,q;
    cin>>n>>q;
    long long sum=1,ans=1;
    for(long long i=2;i<=n;i++)
    {
        ans=((ans%2023)*(q%2023))%2023;
        sum=((sum%2023)+(ans%2023))%2023;
    }
    cout<<sum<<endl;
}
