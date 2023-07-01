#include<bits/stdc++.h>
using namespace std;
int degree2(int n,int p)
{
    int ans=0;
    for(int i=p;i<=n;i*=p)
        ans+=n/i;
    return ans;
}
int nt(int n){
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return n>1;
}
long long cntdiv(int n)
{
    long long res=1;
    for(long long i=1;i<=n;i++)
    {
        if(nt(i))
            res*=(degree2(n,i)+1);
    }
    return res;
}
int main()
{
    long long n;
    cin>>n;
    cout<<cntdiv(n)-1<<endl;
    //https://codeforces.com/gym/347815/problem/4D
}
