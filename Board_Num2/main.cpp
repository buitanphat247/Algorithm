#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long n;
    cin>>n;
    long long tmp=n,cnt=0;
    for(long long i=0;i<=n;i++)
    {
        for(long long j=i+1;j<=tmp;j++)
        {
             cout<<j<<" ";
        }
        cout<<endl;
        tmp++,cnt++;
        if(cnt==n)
            return 0;
    }
}
