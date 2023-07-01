#include<bits/stdc++.h>
using namespace std;
vector<long long>x;
bool check(long long k,long long c)
{
    long long cnt=1;
    long long last_position=x[0];
    for(long long i=1; i<x.size(); i++)
    {
        if(x[i]-last_position>=k)
            cnt++,last_position=x[i];
        if(cnt>=c)
            return true;
    }
    return false;
}
long long bs(long long left,long long right,long long c)
{
    long long res=0;
    while(left<=right)
    {
        long long mid=(left+right)/2;
        if(check(mid,c))
            res=mid,left=mid+1;
        else
            right=mid-1;
    }
    return res;
}
int main()
{

    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,c;
    cin>>n>>c;
    for(long long i=0; i<n; i++)
    {
        long long tmp;
        cin>>tmp;
        x.push_back(tmp);
    }
    sort(x.begin(),x.end());
    cout<<bs(1,x.back(),c)<<endl;
}
