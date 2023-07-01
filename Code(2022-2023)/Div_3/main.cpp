#include<bits/stdc++.h>
using namespace std;
const long long mod=1e5;
int main()
{
    long long l,r,cnt=0;
    cin>>l>>r;
    if (l % 3 == 0)
        cnt = (r - l) / 3 + 1;
    else
        cnt = (r - (l / 3 + 1) * 3 + 3) / 3;
    cout<<cnt<<endl;
}
