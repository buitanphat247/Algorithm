#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    string s;
    cin>>s;
    long long cnt=0;
    vector<long long>dp(200,0);
    for(long long i=0; i<s.size(); i++)
    {
        char c=s[i];
        dp[(int)c]++;
        if(dp[(int)c]>1)
            cnt++,dp.clear(),dp[(int)c]=1;
    }
    cout<<cnt<<endl;
}
