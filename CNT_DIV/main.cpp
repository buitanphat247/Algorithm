#include<bits/stdc++.h>
using namespace std;
long long cnt_div(long long x)
{
    long long cnt=0;
    for(long long i=1;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            if(i*i!=x)
                cnt+=2;
            else
                cnt++;
        }
    }
    return cnt;
}
int main()
{
    cout<<cnt_div(10)<<endl;
}
