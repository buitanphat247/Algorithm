#include<bits/stdc++.h>
using namespace std;
const long long mod=1e3+10;

int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long D,R,k;
    cin>>D>>R>>k;
    long long x[mod][mod];
    k-=2;
    for(long long i=1; i<=D; i++)
    {
        for(long long j=1; j<=R; j++)
        {
            char tmp;
            cin>>tmp;
            if(tmp=='.')
                x[i][j]=0;
            else
                x[i][j]=1;
        }
    }
    long long p[mod][mod],kq=-1e9;
    for(long long i=1; i<=D; i++)
        for(long long j=1; j<=R; j++)
            p[i][j]=p[i-1][j]+p[i][j-1]-p[i-1][j-1]+x[i][j];

    long long x1_min=1e9,y1_min=1e9;

    for(long long x1=2; x1<=D-k; x1++)
    {
        for(long long y1=2; y1<=R-k; y1++)
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
}
