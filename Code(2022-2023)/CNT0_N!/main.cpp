#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,res=0;
        cin>>n;
        for(long long i=5; n/i>=1; i*=5)
            res+=n/i;
        cout<<res<<endl;
    }
}
