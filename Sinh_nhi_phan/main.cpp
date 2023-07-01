#include<bits/stdc++.h>
using namespace std;
const long long mod=1e6;
long long n,x[99],check[99]= {},z;
void show()
{
    for(long long i=0; i<n; i++)
        cout<<x[i];
    cout<<endl;
}
void Try(long long k)
{
    if(k==n)
        show();
    else
        for(long long i=0; i<=1; i++)
        {
            x[k]=i;
            Try(k+1);
        }
}
int main()
{
    cin>>n;
    Try(0);
}
