#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,p=2,x=1,cnt=0;
    cin>>n;
    while(n/pow(p,x)!=0)
    {
        cnt+=n/pow(p,x);
        x++;
    }
    cout<<cnt<<endl;
    //https://codeforces.com/gym/347815/problem/4A
}
