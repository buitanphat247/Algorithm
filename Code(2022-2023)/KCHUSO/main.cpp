#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k,tich=1,mod=1;
    cin>>m>>n>>k;
    for (int i = 1; i <= k; i++)
        mod *= 10;
    for(long long i=1; i<=n; i++)
        tich=((tich%mod)*(m%mod))%mod;
    string s=to_string(tich);
    while ((int)s.size() < k)
        s = '0' + s;
    cout<<s<<endl;
    //https://codeforces.com/gym/347815/problem/1C
}
