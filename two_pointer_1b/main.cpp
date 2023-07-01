#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    long long a[n],b[m];
    for(long long &x:a)
        cin>>x;
    sort(a,a+n);
    vector<long long>c;
    for(long long i=0;i<m;i++)
    {
        cin>>b[i];
        long long tmp=b[i]-1;
        long long pos=upper_bound(a,a+n,tmp)-a;
        c.push_back(pos-0);
    }
    for(auto it:c)
        cout<<it<<" ";
//https://lqdoj.edu.vn/problem/twopointerib
}
