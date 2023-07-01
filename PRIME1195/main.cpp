//https://codeforces.com/gym/347815/problem/2E
#include<bits/stdc++.h>
using namespace std;
bool isprime(long long n)
{
    if(n==1||n==0)
        return false;
    for(long long i=2; i*i<=n; i++)
        if(n%i==0)
            return false;
    return true;
}
int main()
{
    long long M=480,N,num_min=1e9;
    cin>>M>>N;
    vector<long long>v,dp;
    for(long long i=1; i<=M; i++)
        if(M%i==0&&isprime(i))
            v.push_back(i);
    for(auto it:v)
    {
        if(abs(N-it)==num_min)
        {
            num_min=abs(N-it);
            dp.push_back(it);
        }
        else if(abs(N-it)<num_min)
        {
            dp.clear();
            num_min=abs(N-it);
            dp.push_back(it);
        }
    }
    if(dp.size()!=0)
        for(auto it:dp)
            cout<<it<<" ";
    else
        cout<<"-1"<<endl;
}
