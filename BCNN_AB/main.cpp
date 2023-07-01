#include<bits/stdc++.h>
using namespace std;
const long long mod=99e9;
int main()
{
    long long n,x;
    cin>>n>>x;
    long long v[n],max_num=-1e9,check=0;
    for(long long i=0; i<n; i++)
    {
        cin>>v[i];
        max_num=max(v[i],max_num);
    }
    sort(v,v+n);
    for(long long i=x+1; i<=mod; i++)
    {
        for(auto it:v)
        {
            if(i%it==0)
            {
                cout<<i<<endl;
                check=1;
                break;
            }
        }
        if(check==1)
            return 0;
    }
}
