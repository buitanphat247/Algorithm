#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin>>n;
    long long x[n];
    for(long long i=0;i<n;i++)
        cin>>x[i];
    long long check=0,left=0,right=1;
    while(right<n)
    {
        check=max(check,x[right]-x[left]);
        if(x[right]<x[left])
            left=right;
        right++;
    }
    cout<<check<<endl;
}
