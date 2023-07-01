#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,k;
    cin>>n>>k;
    vector<long long>v(n);
    long long sum=0;
    long long max_sum=-1e9;
    long long l=0,r=l+1;
    for(long long i=0;i<n;i++)
        cin>>v[i];
    sum=v[l];
    while(r<n)
    {
        sum+=v[r];
        if(sum<=k)
        {
            r++;
            max_sum=max(r-l,max_sum);
        }else{
            sum-=v[l];
            l++,r++;
            if(sum<=k)
                max_sum=max(r-l,max_sum);
        }
    }
    cout<<max_sum<<endl;
    //https://lqdoj.edu.vn/problem/sumconset
}
