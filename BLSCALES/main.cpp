#include <bits/stdc++.h>
using namespace std;

long long n, m;
vector<long long> w, v, kq;
bool found;
void solve(long long i, long long sum, long long v_kg)
{
    if (sum == v_kg)
    {
        found=true;
        return;
    }
    if (i == n)
        return;
    solve(i + 1, sum + w[i], v_kg);
    solve(i + 1, sum, v_kg);
}

int main()
{
    cin >> n >> m;
    w.resize(n + 10, 0);
    v.resize(m + 10, 0);
    for (long long i = 0; i < n; i++)
        cin >> w[i];
    for (long long i = 0; i < m; i++)
    {
        cin >> v[i];
        found=false;
        solve(0, 0, v[i]);
        if(found==true)
            cout<<true;
        else
            cout<<false;
    }
    return 0;
}
//https://oj.luyencode.net/problem/BLSCALES
