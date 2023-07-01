#include<bits/stdc++.h>
using namespace std;
using namespace std;

struct pos
{
    long long pos, value;
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);

    long long n, x;
    cin >> n >> x;

    pos a[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i].value;
        a[i].pos = i;
    }

    sort(a, a + n, [](const pos&a,const pos&b)
    {
        return a.value<b.value;
    });

    for(long long i=0; i<n; i++)
    {
        long long tmp=abs(x-a[i].value);
        auto it = lower_bound(a, a + n, tmp, [](const pos& a,const long long value)
        {
            return a.value<value;
        });
        if(it!=a+n&&it->value+a[i].value==x&&it->pos!=a[i].pos)
        {
            if(it->pos>a[i].pos)
                cout<<a[i].pos+1<<" "<<it->pos+1<<endl;
            else
                cout<<it->pos+1<<" "<<a[i].pos+1<<endl;
            return 0;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
    return 0;
}
//https://lqdoj.edu.vn/problem/cses1640
