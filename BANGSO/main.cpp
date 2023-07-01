#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,m,k=3;
    cin>>m>>n;
    long long x[m+10][n+10];
    for(long long i=1; i<=m; i++)
        for(long long j=1; j<=n; j++)
            cin>>x[i][j];
    long long p[n+10][n+10],kq=-1e9;
    memset(p, 0, sizeof(p));
    for(long long i=1; i<=m; i++)
        for(long long j=1; j<=n; j++)
            p[i][j]=p[i-1][j]+p[i][j-1]-p[i-1][j-1]+x[i][j];
    long long x1_min=1e9,y1_min=1e9;
    for(long long x1=1; x1<=m-k+1; x1++)
    {
        for(long long y1=1; y1<=n-k+1; y1++)
        {
            long long x2=x1+k-1;
            long long y2=y1+k-1;
            if(p[x2][y2]-p[x1-1][y2]-p[x2][y1-1]+p[x1-1][y1-1]>kq)
            {
                kq=p[x2][y2]-p[x1-1][y2]-p[x2][y1-1]+p[x1-1][y1-1];
                x1_min=x1;
                y1_min=y1;
            }
        }
    }
    cout<<kq<<endl;
    cout<<x1_min<<" "<<y1_min<<endl;
}
