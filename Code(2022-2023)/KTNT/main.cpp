#include<bits/stdc++.h>
using namespace std;
const long long mod=1e6;
bool check(long long n)
{
    if(n==1||n==0)
        return false;
    long long cnt=0;
    for(long long i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            if(i*i!=n)
                cnt+=2;
            else
                cnt++;
            if(cnt>2)
                return false;
        }
    }
    return true;
}
int main()
{
    long long n,cnt=0;
    cin>>n;
    while(n--)
    {
        long long tmp;
        cin>>tmp;
        if(check(tmp))
            cnt++;
    }
    cout<<cnt<<endl;
    //https://codeforces.com/gym/347815/problem/2C
}
