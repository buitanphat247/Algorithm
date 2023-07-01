#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=1e6+5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.INP","r",stdin);
    freopen("1.OUT","w",stdout);
    long long n,k,cnt=0;
    cin >> n >> k;
    vector<long long>a(N,true);
    a[0]=a[1]=false;
    for(ll i=2; i<=sqrt(N); i++)
        if(a[i]==1)
            for(ll j=i*2; j<=N; j+=i)
                a[j]=0;
    for(long long i=n;i>=k;i--)
        if(a[i-k]==true&&a[i]==true)
            cnt++;
    cout << cnt<<endl;
    return 0;
}

