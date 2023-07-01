#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,sum=0,max_sum=-1e9;
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        sum+=x;
        max_sum=max(sum,max_sum);
        if(sum<0)
            sum=0;
    }
    cout<<max_sum<<endl;
}
//https://lqdoj.edu.vn/problem/cses1643
