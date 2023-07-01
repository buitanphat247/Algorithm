#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,m;
    cin>>m>>n;
    long long x[m+10][n+10];
    for(long long i=1; i<=m; i++)
        for(long long j=1; j<=n; j++)
            cin>>x[i][j];
    long long p[m+10][n+10]={0};
    for(long long i=1; i<=m; i++)
        for(long long j=1; j<=n; j++)
            p[i][j]=p[i-1][j]+p[i][j-1]-p[i-1][j-1]+x[i][j];
    long long x1,y1,x2,y2;
    long long k;
    cin>>k;
    while(k--)
    {
        cin>>x1>>y1>>x2>>y2;
        cout<<p[x2][y2]-p[x1-1][y2]-p[x2][y1-1]+p[x1-1][y1-1]<<endl;
    }
}
