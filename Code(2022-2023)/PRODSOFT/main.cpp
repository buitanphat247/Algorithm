#include <bits/stdc++.h>

using namespace std;
const long long mod=1e6+999;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n;
    cin>>n;
    long long cnt=0,a[mod]={0},x,check=true;
    for(long long i=0;i<n;i++)
    {
        cin>>x;
        a[x]++;
        if(a[x]>1)
            cnt++,check=false;
    }
    if(check==true)
        cout<<cnt<<endl;
    else
        cout<<n-cnt<<endl;
}

