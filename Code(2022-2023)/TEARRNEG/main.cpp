#include <bits/stdc++.h>

using namespace std;
const long long mod=1e6;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n;
    cin>>n;
    long long a[n+5]={0},check=0,x;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
            x=a[i],check=false;
    }
    if(check==false)
        cout<<x<<endl;
    else
        cout<<"OK"<<endl;
}
