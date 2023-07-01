#include<bits/stdc++.h>
using namespace std;
long long fact(long long n)
{
    long long i=2,d=0;
    while(i<=int(sqrt(n)))
    {
        while (n % i == 0)
        {
            n=n/i;
            d++;
        }
        i++;
    }
    if(n>1) d++;
    return d;
}
int main()
{
    long long n,sum=0,max_num=-1e9;
    cin>>n;
    vector<long long>v(n+10),dp(n+10);
    for(long long i=0; i<n; i++)
    {
        cin>>v[i];
        dp[i]=fact(v[i]);
        sum+=dp[i];
        max_num=max(dp[i],max_num);
    }
    cout<<sum-max_num<<endl;
    //https://codeforces.com/gym/347815/problem/3D
}
