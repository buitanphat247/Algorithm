#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long a[n+1];
    long long odd[n+1],even[n+1];
    memset(odd,0,sizeof(odd));
    memset(even,0,sizeof(even));
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        odd[i]=odd[i-1]+(a[i]%2!=0);
        even[i]=even[i-1]+(a[i]%2==0);
    }
    for(long long i=1; i<=n; i++)
    {
        for(long long j=i+1; j<=n; j++)
        {
            if(odd[j]-odd[i-1]==even[j]-even[i-1])
                cnt++;
        }
    }
    cout<<cnt<<endl;
}
