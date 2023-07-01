#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
void show()
{
    cout<<s<<" ";
}
void solve(long long i)
{
    for(long long j=0;j<=1;j++)
    {
        s[i]=j+'A';
        if(i==n-1)
            show();
        else
            solve(i+1);
    }
}
int main()
{
    cin>>n;
    for(long long i=0;i<n;i++)
        s+='A';
    solve(0);
}
