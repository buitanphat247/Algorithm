#include<bits/stdc++.h>
using namespace std;
//https://lqdoj.edu.vn/problem/lessthan
struct gs
{
    long long id,vl,kq;
};
bool cmp(gs a,gs b)
{
    return a.vl<b.vl;
}
bool cmp1(gs a,gs b)
{
    return a.id<b.id;
}
int main()
{
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long n;
    cin >> n;
    gs a[n];
    long long v[n];
    for (long long i = 0; i < n; ++i)
    {
        cin >> a[i].vl;
        a[i].id=i;
        v[i]=a[i].vl;
    }
    sort(a,a+n,cmp);
    sort(v,v+n);
    for(long long i=0; i<n; i++)
    {
        long long pos=lower_bound(v,v+n,a[i].vl)-v;
        a[i].kq=pos-0;
    }
    sort(a,a+n,cmp1);
    for(auto it:a)
        cout<<it.kq<<" ";
    return 0;
}
