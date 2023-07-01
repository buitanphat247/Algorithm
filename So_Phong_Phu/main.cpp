#include<bits/stdc++.h>
using namespace std;
long long sum_div(long long n)
{
    long long sum=0;
    for(long long i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i!=n/i)
                sum+=i+n/i;
            else
                sum+=i;
        }
    }
    if(sum-n>n)
        return 1;
    else
        return 0;
}
int main()
{
    long long l,r;
    cin>>l>>r;
    vector<long long>v;
    for(long long i=l;i<=r;i++)
        if(sum_div(i))
            v.push_back(i);
    cout<<v.size()<<endl;
}
