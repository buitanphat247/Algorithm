#include <bits/stdc++.h>
using namespace std;
int main()
{

    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,m,k,tich=1,mod=10;
    cin>>m>>n;
    for(long long i=1; i<=n; i++)
        tich=((tich%mod)*(m%mod))%mod;
    string s=to_string(tich);
    cout<<s<<endl;
    //https://oj.luyencode.net/problem/LDIGIT2
}
