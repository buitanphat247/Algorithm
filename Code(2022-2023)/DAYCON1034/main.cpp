#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long kq=-1e9,sum=0;
    long long n,k,cnt=0;
    cin>>n>>k;
    vector<long long>v(n);

    for(long long i=0; i<n; i++)
    {
        cin>>v[i];
        if(cnt!=k)
            sum+=v[i],cnt++;
    }
    kq=max(kq,sum);
    for(long long i=1; i<n-k+1; i++)
        sum=sum+v[i+k-1]-v[i-1],kq=max(kq,sum);
    cout<<kq<<endl;
}
