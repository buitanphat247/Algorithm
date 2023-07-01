#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n;
    const long long mod=1e9+7;
    cin>>n;
    long long tich=1;
    for(long long i=1;i<=n;i++)
        tich=((tich%mod)*(2%mod))%mod;
    cout<<tich<<endl;
    return 0;
}
//https://lqdoj.edu.vn/problem/cses1617
