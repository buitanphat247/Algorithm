#include<bits/stdc++.h>
using namespace std;
const long long mod=1e6+100;
long long n,x,cnt;
vector<long long>v(mod);
void nhap()
{
    cin>>n;
    for(long long i=1; i<=n; i++)
    {
        long long x;
        cin>>x;
        v[x]++;
    }
}
void xuli()
{
    cnt=0;
    for(long long i=1; i<=n; i++)
        if(v[i]==0)
            cnt++;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    nhap();
    xuli();
    cout<<cnt<<endl;
}
