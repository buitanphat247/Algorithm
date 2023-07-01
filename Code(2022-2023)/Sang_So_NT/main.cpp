#include<bits/stdc++.h>
using namespace std;
const long long MOD=1e7;
const long long N=100;
int main()
{
    vector<long long>v,v1(MOD,1);
    v1[1]=v1[0]=0;
    for(long long i=2;i<=sqrt(MOD);i++)
        if(v1[i]==1)
            for(long long j=i*i;j<=MOD;j+=i)
                v1[j]=0;
    for(long long i=0;i<=N;i++)
        if(v1[i])
            v.push_back(i);
    for(auto it:v)
        cout<<it<<" ";
}
