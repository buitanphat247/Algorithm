#include<bits/stdc++.h>
using namespace std;

struct pos
{
    long long id, vl;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n, x;
    cin >> n >> x;
    pos a[n];
    for(long long i = 0; i < n; i++)
    {
        cin >> a[i].vl;
        a[i].id = i + 1;
    }
    sort(a, a + n, [](const pos& a, const pos& b)
    {
        return a.vl < b.vl;
    });

    for(long long i = 0; i < n - 2; i++)
    {
        for(long long j = i + 1; j < n - 1; j++)
        {
            long long target = x - a[i].vl - a[j].vl;
            auto it = lower_bound(a + j + 1, a + n, target, [](const pos& a, const long long value)
            {
                return a.vl < value;
            });
            if(it != a + n && it->vl == target && a[i].id != it->id && a[j].id != it->id)
            {
                vector<long long>v;
                v.push_back(a[i].id);
                v.push_back(a[j].id);
                v.push_back(it->id);
                sort(v.begin(),v.end());
                for(auto it:v)
                    cout<<it<<" ";
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}
//https://lqdoj.edu.vn/problem/cses1641