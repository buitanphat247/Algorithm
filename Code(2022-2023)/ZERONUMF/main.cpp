#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.INP", "r", stdin);
    freopen("1.OUT", "w", stdout);
    long long n,cnt=0;
    cin>>n;
    while(n>0)
        n/=5,cnt+=n;
    cout<<cnt<<endl;
}
