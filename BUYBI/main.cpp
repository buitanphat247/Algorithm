#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b,sum=0;
    cin>>n>>a>>b;
    for(long long i=0;i<n;i++)
    {
        long long tmp;
        cin>>tmp;
        if(tmp==2)
            sum=sum+(a+b);
        else if(tmp==1)
            sum=sum+min(a,b);
    }
    cout<<sum<<endl;
}
//https://codeforces.com/gym/447232/submission/208841389
