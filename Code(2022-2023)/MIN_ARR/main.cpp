#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n;
    cin>>n;
    long long x[n],min_num=1e9;
    for(long long i=0;i<n;i++)
    {
        cin>>x[i];
        min_num=min(x[i],min_num);
    }
    cout<<min_num<<endl;
}
