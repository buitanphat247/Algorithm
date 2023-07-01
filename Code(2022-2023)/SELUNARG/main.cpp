#include <bits/stdc++.h>
using namespace std;
struct lunag
{
    long long t1,t2;
};
bool comp(const lunag &l1, const lunag &l2)
{
    return l1.t1<l2.t2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.INP", "r", stdin);
    freopen("1.OUT", "w", stdout);
    long long n,i,j,num_max=-1e9;
    cin >> n;
    vector<lunag> v(n);
    for(i=0;i<n;i++)
        cin >> v[i].t1 >> v[i].t2;
    sort(v.begin(), v.end(), comp);
    vector<long long> dp(n + 10, 1);
    for(i=0;i<n;i++)
        for(j=0;j<i;j++)
            if(v[i].t1 > v[j].t2)
                dp[i]=max(dp[i], dp[j]+1),num_max=max(dp[i],num_max);
    cout <<num_max<< endl;
    return 0;
}
