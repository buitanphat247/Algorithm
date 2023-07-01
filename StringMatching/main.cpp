#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    string a,b;
    cin>>a>>b;
    long long k=b.size(),cnt=0;
    long long left=1,right=k;
    for(long long i=0; i<=a.size()-b.size(); i++)
        if(a.substr(i,b.size())==b)
            cnt++;
    cout<<cnt<<endl;
}
