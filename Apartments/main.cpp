#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,m,k;
    cin>>n>>m>>k;
    long long a[n],b[m];
    for(long long i=0;i<n;i++)
        cin>>a[i];
    for(long long i=0;i<m;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    long long i=0,j=0,cnt=0;
    while(i<n&&j<m)
    {
        if(a[i]-k>b[j])
            j++;
        else{
            if(a[i]+k<b[j])
                i++;
            else
                i++,j++,cnt++;
        }
    }
    cout<<cnt<<endl;
}
//https://lqdoj.edu.vn/problem/cses1084
