#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long x[n];
    vector<long long>v;
    for(long long i=0;i<n;i++)
    {
        cin>>x[i];
        v.push_back(x[i]);
    }
    sort(v.begin(),v.end());
    long long pos=upper_bound(v.begin(),v.begin()+v.size(),k)-v.begin();
    long long pos1=lower_bound(v.begin(),v.begin()+v.size(),v[pos])-v.begin();
    long long pos_end=upper_bound(v.begin(),v.begin()+v.size(),v[pos])-v.begin();
    cout<<v[pos]<<endl;
    long long tmp=pos_end-pos1;
    while(tmp--)
    {
        long long pos_x=find(x,x+n,v[pos])-x;
        cout<<pos_x+1<<" ";
        x[pos_x]=0;
    }
}
