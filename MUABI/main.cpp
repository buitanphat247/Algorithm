#include<bits/stdc++.h>
using namespace std;
struct circle
{
    long long a,s;
};
bool cmp(const circle& l,const circle& r)
{
    return l.s>r.s;
}
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,m;
    cin>>n>>m;
    circle dp[m];
    for(long long i=0; i<m; i++)
        cin>>dp[i].a>>dp[i].s;
    sort(dp,dp+m,cmp);
      long long sum=0;
    for(auto it:dp)
    {
        if(n>=it.a)
        {
            n-=it.a;
            sum+=it.a*it.s;
        }else{
            sum+=n*it.s;
            break;
        }
    }
    cout<<sum<<endl;
}
