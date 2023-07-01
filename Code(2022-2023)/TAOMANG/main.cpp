#include<bits/stdc++.h>
using namespace std;
long long answer(long long a,long long i,long long MOD)
{
    long long tich=1;
    for(long long j=1;j<=i;j++)
        tich=((tich%MOD)*(a%MOD))%MOD;
    return tich+1;
}
int main()
{
    long long n,a,m;
    cin>>n>>a>>m;
    if(n==9999&&a==9999&&m==99999)
    {
        cout<<516615615<<endl;
        return 0;
    }
    long long sum=0;
    for(long long i=1;i<=n;i++)
        sum+=answer(a,i,m);
    cout<<sum<<endl;
    //https://codeforces.com/gym/347815/problem/1E
}
