#include<bits/stdc++.h>
using namespace std;
const int mod = 1e5;

int main()
{
    freopen("1.INP","r",stdin);
    freopen("1.OUT","w",stdout);
    int n, m, cnt = 0, cnt_size = 0;
    cin >> n >> m;
    int A[mod] = {0}, B[mod] = {0}, dp_a[mod] = {0}, dp_d[mod] = {0};
    int c[2 * mod + 1] = {0};

    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
        if(A[i] < 0)
            dp_a[abs(A[i])]++;
        else
            dp_d[A[i]]++;
        c[A[i] + mod]++;
    }

    for(int i = 0; i < m; i++)
    {
        cin >> B[i];
        if(B[i] < 0 && dp_a[abs(B[i])] != 0)
            cnt_size++, dp_a[abs(B[i])] = 0;
        else if(B[i] > 0 && dp_d[B[i]] != 0)
            cnt_size++, dp_d[B[i]] = 0;
        c[B[i] + mod]++;
    }

    for(int i = 0; i <= 2 * mod; i++)
        if(c[i] > 0)
            cnt++;

    cout << cnt << " " << cnt_size << endl;

    return 0;
}

