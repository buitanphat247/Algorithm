#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long x[n];
    for(long long i=0; i<n ; i++)
        cin>>x[i];
    long long sum=0,max_s=0,max_len=1,len=1,start=0;
    for(long long i=0; i<n; i++)
    {
        sum+=x[i];
        if(sum>max_s)
        {
            max_s=sum;
            max_len=len;
            start=i-len+1;
        }
        if(sum<0)
            sum=0,len=0;
        len++;
    }
    cout<<start+1<<" "<<max_len<<endl;
}
