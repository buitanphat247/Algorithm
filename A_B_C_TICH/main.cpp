#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll sum = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n/i; j++)
        {
            sum+=n/(i*j);
        }
    }
    cout << sum << endl;
    //https://oj.luyencode.net/problem/AXBXC
}
