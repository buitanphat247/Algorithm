#include<bits/stdc++.h>
using namespace std;

const long long MAX = 1005;
long long  n, m = 3, x;
vector<long long> v(6000,0),k;
bool found = false;

void solve(long long i, long long sum, long long cnt)
{
    if (cnt == m && sum == x)
    {
        for(auto it:k)
            cout<<it+1<<" ";
        exit(0);
        return;
    }
    if(i==n||cnt>m||sum>x)
        return;
    k.push_back(i);
    solve(i + 1, sum + v[i], cnt + 1);
    k.pop_back();
    solve(i + 1, sum, cnt);
}

int main()
{
    freopen("1.INP", "r", stdin);
    freopen("1.OUT", "w", stdout);
    cin >> n >> x;
    for (long long i = 0; i < n; i++)
        cin >> v[i];
    solve(0, 0, 0);
    if(found==false)
        cout<<"IMPOSSIBLE"<<endl;
    //https://lqdoj.edu.vn/problem/cses1641
}
