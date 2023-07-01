#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e4;

int main()
{
    freopen("AD.inp","r",stdin);
    freopen("AD.out","w",stdout);
    string s1, s2;
    cin >> s1 >> s2;
    long long dp1[300]={0};
    long long dp2[300]={0};
    for(long long i=0;i<s1.size();i++)
        dp1[int(s1[i])]++;
    for(long long i=0;i<s2.size();i++)
        dp2[int(s2[i])]++;
    long long result=0;
    for (int i = 0; i < 300; i++)
        result += abs(dp1[i] - dp2[i]);
    cout<<result<<endl;
    return 0;
}
