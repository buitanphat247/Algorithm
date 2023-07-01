#include<bits/stdc++.h>
using namespace std;
long long n;
const long long mod=99;
long long check[mod]={},x[mod];
void show()
{
    for(long long i=1;i<=n;i++)
        cout<<x[i];
    cout<<endl;
}
void Try(long long k)
{
    for(long long i=1;i<=n;i++)
    {
        if(check[i]==0)
        {
            check[i]=1;
            x[k]=i;
            if(k==n)
                show();
            else
                Try(k+1);
            check[i]=0;
        }
    }
}
int main()
{
    cin>>n;
    Try(1);
}
