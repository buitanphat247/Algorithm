#include<bits/stdc++.h>
using namespace std;
bool cmp(long long a ,long long b)
{
    return a>b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,m;
    cin>>n>>m;
    long long x[n+1];
    for(long long i=0;i<n;i++)
        cin>>x[i];
    sort(x,x+n,cmp);
    long long sum=0;
    for(long long i=0;i<n;i++)
    {
        sum=max(sum,(x[i]*(i+1)));
        if(i+1>=m)
            break;
    }
    cout<<sum<<endl;
}
//https://codeforces.com/gym/447232/problem/C
