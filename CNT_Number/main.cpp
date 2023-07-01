#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,cnt=0;
    cin>>n>>x;
    for(long long i=0;i<n;i++)
    {
        long long tmp;
        cin>>tmp;
        if(tmp==x)
            cnt++;
    }
    cout<<cnt<<endl;
}
