#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
long long sum_div(long long n)
{
    long long sum=0;
    for(long long i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i!=n/i)
            {
                sum+=i+n/i;
            }
            else
            {
                sum+=i;
            }
        }
    }
    return sum;
}
int main()
{
    long long n;
    cin>>n;
    cout<<sum_div(n)<<endl;
}
