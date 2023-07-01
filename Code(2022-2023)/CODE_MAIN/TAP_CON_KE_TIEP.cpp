#include<bits/stdc++.h>
using namespace std;
long long n,k;
vector<long long>v,z;
vector<string>dp;
void solve(long long i,long long last)
{
    if(i==k)
    {
        string s;
        for(long long i=0; i<k; i++)
            s+=to_string(v[i]);
        dp.push_back(s);
        return;
    }
    for(long long j=last+1; j<=n; j++)
    {
        v.push_back(j);
        solve(i+1,j);
        v.pop_back();
    }
}
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        z.resize(k);
        string tmp;
        for(long long i=0; i<k; i++)
        {
            cin>>z[i];
            tmp+=to_string(z[i]);
        }
        solve(0,0);
        for(auto it:dp)
            dp.push_back(it);
        for(long long i=0; i<dp.size(); i++)
        {
            if(dp[i]==tmp)
            {
                for(auto it:dp[i+1])
                    cout<<it<<" ";
                cout<<endl;
                break;
            }
        }
    }

}
