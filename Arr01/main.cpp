#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{   ll n,kq=-1e9;
    cin >> n;
    ll a[n];
    for(int i=0; i<n; i++)

    {
        cin >> a[i];
        kq=max(kq,a[i]);
    }
    cout<<kq<<endl<<find(a,a+n,kq)-a+1<<endl;
    return 0;
}
