#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        for(long long i=2; i<n; i++)
            if(i*i>=n)
            {
                cout<<i<<endl;
                break;
            }
    }
}
