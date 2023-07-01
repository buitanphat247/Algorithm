
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long sum=0;
    for(long long i=0;i<n;i++)
    {
        long long tmp;
        cin>>tmp;
        if(tmp%2==0)
        sum+=tmp;
    }
    cout<<sum<<endl;
}
