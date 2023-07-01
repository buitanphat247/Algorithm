#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long x[n],b[n];
    for(long long i=0;i<n;i++)
    {
        cin>>x[i];
        if(i==0)
            b[i]=x[i];
        else
            b[i]=x[i]+b[i-1];
    }
    for(auto it:b)
        cout<<it<<" ";
}
