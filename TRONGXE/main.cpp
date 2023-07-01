#include<bits/stdc++.h>
using namespace std;
long long v[100000];
long long n, cost = 0,x;

void nhap()
{
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> x;
        v[x - 10102010]++;
    }
}
void giai()
{
    for (long long i = 0; i <= 8000; i++)
    {
        if(v[i]>0)
        {
            if(v[i]<=5)
                cost+=100;
            else
                cost+=v[i]-5+100;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    nhap();
    giai();
    cout << cost << endl;
}
