// tìm fibonacci thứ N
#include<bits/stdc++.h>
using namespace std;
const long long MOD=99e9;
int main()
{
    long long n;
    cin>>n;
    long long a=0,b=1,c=a+b;
    vector<long long>v;
    v.push_back(a);

    while(c<=MOD)
    {
        v.push_back(c);
        a=b;
        b=c;
        c=a+b;
    }
    cout<<v[n-1]<<endl;
}
