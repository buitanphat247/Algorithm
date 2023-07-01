#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long x[2];
    fill(x,x+2,0);
    for(long long i=0; i<n; i++)
    {
        long long tmp;
        cin>>tmp;
        if(tmp==1||tmp==0)
            x[tmp]++;
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(x[1]>=1&&x[0]==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
