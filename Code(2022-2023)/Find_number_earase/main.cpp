#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k;
    cin>>n>>m;
    k=n-m;
    vector<long long>v,a(n),b(k);
    for(long long i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    for(long long i=0;i<k;i++)
    {
        cin>>b[i];
        if(binary_search(a.begin(),a.end(),b[i]))
        {
            long long pos=lower_bound(a.begin(),a.begin()+a.size(),b[i])-a.begin();
            a.erase(a.begin()+pos);
        }
    }
    for(auto it:a)
        cout<<it<<" ";
}
