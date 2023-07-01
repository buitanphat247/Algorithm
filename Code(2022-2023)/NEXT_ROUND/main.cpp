#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n=0,k=0;
    cin>>n>>k;
    long long x[n+1]={0},num_k=0,j=0,cnt=0;
    for(long long i=1;i<=n;i++)
    {
        cin>>x[i];
        if(i==k)
            num_k=x[i];
    }
    for(long long i=1;i<=n;i++)
        if(x[i]>=num_k&&x[i]!=0)
            cnt++;
    cout<<cnt<<endl;
}
