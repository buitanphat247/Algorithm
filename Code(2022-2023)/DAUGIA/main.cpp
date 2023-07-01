#include<bits/stdc++.h>
using namespace std;
bool check(string tmp)
{
    string z=tmp;
    reverse(z.begin(),z.end());
    if(tmp==z)
        return true;
    return false;
}
bool check_snt(long long n)
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
    long long cnt=0,a,b;
    cin>>a>>b;
    for(long long i=a;i<=b;i++)
        if(check(to_string(i))&&check_snt(i))
            cnt++;
    cout<<cnt<<endl;
    //https://codeforces.com/gym/347815/problem/2D
}
