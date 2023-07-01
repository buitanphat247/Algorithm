#include<bits/stdc++.h>
using namespace std;

const int MAXN = 110;

int n, x[MAXN][MAXN], f[MAXN][MAXN],k=0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> x[i][j];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(x[i][j] != 0)
                f[i][j] = min(f[i-1][j], min(f[i][j-1], f[i-1][j-1])) + 1, k = max(k, f[i][j]);

    long long p[MAXN][MAXN]= {0},kq=-1e9;
    for(long long i=1; i<=n; i++)
        for(long long j=1; j<=n; j++)
            p[i][j]=p[i-1][j]+p[i][j-1]-p[i-1][j-1]+x[i][j];

    for(long long x1=1; x1<=n-k+1; x1++)
    {
        for(long long y1=1; y1<=n-k+1; y1++)
        {
            long long x2=x1+k-1;
            long long y2=y1+k-1;
            kq=max(p[x2][y2]-p[x1-1][y2]-p[x2][y1-1]+p[x1-1][y1-1],kq);
        }
    }

    cout<<kq<<endl;
}






