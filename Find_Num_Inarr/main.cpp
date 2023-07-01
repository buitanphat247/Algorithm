#include<bits/stdc++.h>
using namespace std;
const long long mod=1e16;
int main()
{
    long long n,cnt=0,dem=0;
    cin>>n;
    for(long long i=1;i<=n;i++)
    {
        dem++;
        if(dem==4)
            cnt+=2,dem=0;
    }
    cout<<n*2+dem<<endl;
}
