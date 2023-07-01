#include<bits/stdc++.h>
using namespace std;
#define ll int
ll cmp(const void* a,const void* b)
{
    ll *x=(ll*)a;
    ll *y=(ll*)b;
    return *x>*y;
}
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    // hàm quicksort bắt buộc có compare mới dùng được quicksort
    qsort(a,n,sizeof(ll),cmp);

    for(auto it:a)
        cout<<it<<" ";
}
