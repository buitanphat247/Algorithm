#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,check=0,d=0;
    cin>>n;
    float sum=0;
    for(long long i=0;i<n;i++)
    {
        float tmp;
        cin>>tmp;
        if(tmp<0)
            sum+=tmp,check=1,d++;
    }
    if(check==1)
        cout<<fixed<<setprecision(2)<<sum/d<<endl;
    else
        cout<<"-1"<<endl;
}
