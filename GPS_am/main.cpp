#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long x[n];
    long long check=1,min_a=1e9,max_a=-1e9;
    for(long long i=0;i<n;i++)
    {
        cin>>x[i];
        if(x[i]<0)
            min_a=min(min_a,i),check=0,max_a=max(max_a,i);
    }
    if(check==1)
        cout<<"-1 -1"<<endl;
    else
        cout<<min_a+1<<" "<<max_a+1<<endl;
}
