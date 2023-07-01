#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    cin>>n;
    long long x[n],f[n+2],d1=0,d2=0;
    for(long long i=0;i<n;i++)
    {

        cin>>x[i];
        if(i==0&&d1!=1)
            f[0]=0,d1=1;
        else if(i==1&&d2!=1)
            f[1]=abs(x[1]-x[0]),d2=1;
        else
            f[i] = min(f[i-1] + abs(x[i] - x[i-1]), f[i-2] + abs(x[i] - x[i-2]));
    }
    cout<<f[n-1]<<endl;
	//https://lqdoj.edu.vn/problem/stonefrog1
}
