#include<bits/stdc++.h>
using namespace std;
const int maxx=1000005;
long long res = 0, t = 0;
int n, m;
int a[1600][1600];
bool p[maxx];

void sang()
{
    int j;
    for(int i = 1; i <= maxx; i++) p[i] = true;
    p[0] = false;
    p[1] = false;
    for(int i = 2; i <= int(sqrt(maxx)); i++)
    {
        if (p[i]==true)
        {
            j=i*i;
            while(j<=maxx)
            {
                p[j]=false;
                j=j+i;
            }
        }
    }
}
void check(int x, int y)
{
    if (a[x][y]==0) return;
    int k = a[x][y];
    if (p[k]) res+=k, t++;
    for(int i = 1; i<=5; i++)
    {
        if (i + y > m) break;
        k = k*10+a[x][y+i];
        if (p[k]) res +=k, t++;
    }
    k = a[x][y];
    for(int i = 1; i<=5; i++)
    {
        if ((i + x > n)||(i+y > m)) break;
        k = k*10+a[x+i][y+i];
        if (p[k]) res +=k, t++;
    }
    k = a[x][y];
    for(int i = 1; i<=5; i++)
    {
        if (i + x > n) break;
        k = k*10+a[x+i][y];
        if (p[k]) res +=k, t++;
    }
}

void giai()
{
    sang();
    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=m; j++) check(i,j);
    printf("%lld %lld",t,res);
}
int main()
{
    scanf("%d %d", &n, &m);
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=m; j++) scanf("%d",&a[i][j]);
    }
    giai();

    return 0;
    //https://codeforces.com/gym/347815/problem/5D
}
