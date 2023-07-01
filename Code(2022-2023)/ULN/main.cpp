#include<bits/stdc++.h>
using namespace std;
bool cnt_div(long long n)
{
    long long cnt=0;
    for(long long i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            if(i*i!=n)
                cnt+=2;
            else
                cnt++;
        }
    }
    if(cnt==2||cnt==1)
        return false;
    else
        return true;
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(cnt_div(n)==false)
            cout<<"-1"<<endl;
        else
        {
            long long tmp=n-1;
CHECK:
            if(n%tmp!=0)
            {
                tmp--;
                goto CHECK;
            }
            cout<<tmp<<endl;
        }
    }
}
