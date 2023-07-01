#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,cnt=0;
        cin>>n;
        long long x[n],check[n];
        fill(check,check+n,0);
        for(long long i=0; i<n; i++)
            cin>>x[i];
        sort(x,x+n);
        for(long long i=0; i<n; i++)
        {
            if(check[i]==false)
            {
                for(long long j=i+1; j<n; j++)
                {
                    if(check[j]==false&&x[j]==x[i]*2)
                    {
                        check[j]=true;
                        check[i]=true;
                        cnt++;
                        break;
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }
}
