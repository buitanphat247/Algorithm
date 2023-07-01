#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,k;
    cin>>n>>k;
    long long x[n+100]= {0};
    long long sum=0,min_num=99e99;
    for(long long i=1; i<=n; i++)
    {
        cin>>x[i];
        if(i<=k)
            sum+=x[i];
    }
    long long j=1;
    min_num=min(sum,min_num);
    for(long long i=k; i<n; i++)
    {
        sum+=x[i+1]-x[i-k+1];
        if(sum<min_num)
        {
            j=i-k+2;
            min_num=sum;
        }
    }
    cout<<j<<endl;

}
