#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen ("FINDIVAB.inp","r",stdin);
    freopen ("FINDIVAB.out","w",stdout);
    long long n,a,b;
    cin>>n>>a>>b;
    long long cnt=0,da=a,db=b;
    map<int,int>v;
    v[a]++,cnt++;
    v[b]++,cnt++;
    while(cnt<=n)
    {
        a=a+da,cnt++;
        v[a]++;
        b=b+db,cnt++;
        v[b]++;
    }
    cout << std::next(v.begin(), n-1)->first << endl;
}
