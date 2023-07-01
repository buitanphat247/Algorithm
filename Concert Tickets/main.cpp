#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);

    long long n, m;
    cin >> n >> m;

    map<long long, long long> h;

    for (long long i = 0; i < n; i++)
    {
        long long val;
        cin >> val;
        h[val]++;
    }

    for (long long i = 0; i < m; i++)
    {
        long long val;
        cin >> val;
        auto it = h.upper_bound(val);
        if(it==h.begin())
            cout<<"-1"<<endl;
        else
        {
            it--;
            cout << it->first << endl;
            --it->second;
            if (it->second != 0)
                h.erase(it);
        }
    }

    return 0;
}
//https://lqdoj.edu.vn/problem/cses1091
