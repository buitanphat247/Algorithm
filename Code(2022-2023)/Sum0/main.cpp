#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum=0;
    while(cin>>n)
    {
        if(n==0)
            break;
        else
            sum+=n;
    }
    cout<<sum<<endl;
}
