#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,k;
    cin>>n>>k;
    long long sum=0,max_index=n+k,solve=0,x[max_index]= {0};
    for(long long i=0; i<max_index; i++)
    {
        if(i<n)
            cin>>x[i];
        if(i==0)
            sum+=x[i];
        else if(i<k)
            sum+=x[i];
        else if(i>=k)
        {
            sum=sum+x[i % n] - x[(i - k) % n];
            solve=max(sum,solve);
        }
    }
    cout<<solve<<endl;
}
