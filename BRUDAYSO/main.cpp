#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long n,cnt=1;
    cin>>n;
    while(n!=1)
    {
        if(n%2!=0)
            n=3*n+1,cnt++;
        else
            n/=2,cnt++;
    }
    cout<<cnt<<endl;
    //https://vinhdinhcoder.net/Problem/Details/4686
}
