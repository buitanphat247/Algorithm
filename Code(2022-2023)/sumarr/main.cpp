#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long x[n],y[n],c[n];
    for(long long i=0;i<n;i++)
      cin>>x[i];
    for(long long i=0;i<n;i++)
    {
        cin>>y[i];
        c[i]=x[i]+y[i];
    }
    for(auto it:c)
        cout<<it<<" ";
	//https://lqdoj.edu.vn/problem/sumarr
}
