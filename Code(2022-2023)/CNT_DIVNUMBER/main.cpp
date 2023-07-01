#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    long long cnt=0;
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
    cout<<cnt<<endl;
}
