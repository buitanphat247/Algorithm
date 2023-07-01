#include<bits/stdc++.h>
using namespace std;
const long long MOD=1e3+100;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,m;
    cin >> n>>m;
    long long h[n],t[n];
    long long min_n=9e9;
    map<long long,long long> mp;
    for(long long i=0; i<n; i++)
    {
        cin>>h[i];
        mp[h[i]]++;
        min_n=min(h[i],min_n);
    }
    for(long long i=0; i<m; i++)
    {
        cin>>t[i];
        if(t[i]<min_n)
            cout<<"-1"<<endl;
        else
        {

            auto it=mp.find(t[i]);
            if(it!=mp.end())
            {
                if(it->second!=0)
                {
                    cout<<it->first<<endl;
                    it->second--;
                }
                else
                {
                    cout<<"-1"<<endl;
                }
            }
            else
            {
                auto it1=mp.lower_bound(t[i]);
                it1--;
                if(it1->second==0)
                {

                    cout<<"-1"<<endl;
                }
                else
                {

                    cout<<it1->first<<endl;
                    it1->second--;
                }
            }
        }
    }
}
