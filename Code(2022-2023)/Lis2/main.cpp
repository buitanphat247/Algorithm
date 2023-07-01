#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long len=1,kq=-1e9;
    vector<long long>v(n);
    for(long long i=0;i<n;i++)
        cin>>v[i];
    for(long long i=0;i<n-1;i++)
        if(v[i]<v[i+1])
            len++,kq=max(kq,len);
        else
            len=1;
    cout<<kq<<endl;
}
