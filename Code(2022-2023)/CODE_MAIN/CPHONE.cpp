#include<bits/stdc++.h>
using namespace std;

const long long N = 100001;

int main()
{
    freopen("CPHONE.inp", "r", stdin);
    freopen("CPHONE.out", "w", stdout);
    long long n;
    cin >> n;
    long long bc[N + 1]= {0};
    long long max1 = 0;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        bc[x]++;
        max1 = max(max1, bc[x]);
    }
    for (long long i = 1; i <= N; i++)
    {
        if (bc[i] == max1)
            cout << i << endl;
    }
    return 0;
}

