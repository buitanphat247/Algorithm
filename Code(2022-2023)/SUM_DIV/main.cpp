#include<bits/stdc++.h>
using namespace std;
long long sum_div(long long x)
{
    long long sum=0;
    for(long long i=1;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            if(i!=x/i)
                sum+=i+x/i;
            else
                sum+=i;
        }
    }
    return sum;
}
int main(void)
{
    cout<<sum_div(4)<<endl;
}
