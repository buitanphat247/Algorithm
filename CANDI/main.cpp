#include<bits/stdc++.h>
using namespace std;
const long long mod=1e6;
int main()
{
    long long n,cnt=0;
    cin>>n;
    for(long long i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i*i!=n)
                cnt+=2;
            else
                cnt++;
        }
    }
    cout<<cnt-1<<endl;
    //https://codeforces.com/gym/347815/problem/2B
}
