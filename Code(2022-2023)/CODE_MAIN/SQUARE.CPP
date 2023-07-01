#include <bits/stdc++.h>
#define N 10000
using namespace std;
int n,x[N],y[N],c;
int xmin=N,xmax=-N,ymin=N,ymax=-N;
int main()
{
    freopen("square.inp","r",stdin);
    freopen("square.out","w",stdout);
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        cin>>x[i]>>y[i];
    }
    for (int i=1; i<=n; i++)
    {
        xmax=max(xmax,y[i]);
        xmin=min(xmin,y[i]);
        ymax=max(ymax,x[i]);
        ymin=min(ymin,x[i]);
    }
    c=max(xmax-xmin,ymax-ymin);
    cout << c*c << endl;
    return 0;
}
