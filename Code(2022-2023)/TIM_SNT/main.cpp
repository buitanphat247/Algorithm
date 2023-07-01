#include <bits/stdc++.h>
using namespace std;

const int LIM = 1e7 + 5;
int l, r;
vector<int> prime, lpf;

void sieve(int lim = LIM)
{
    lpf.resize(lim + 1);
    for (int i = 2; i <= lim; ++i)
    {
        if (!lpf[i])
        {
            prime.push_back(i);
            lpf[i] = i;
        }
        for (int j = 0; j < prime.size() && prime[j] <= lpf[i] && i * prime[j] <= lim; ++j)
        {
            lpf[i * prime[j]] = prime[j];
        }
    }
}

int main()
{
    cin >> l >> r;
    sieve(r);

    for (int i = max(l, 2); i <= r; ++i)
    {
        if (lpf[i] == i)
        {
            cout << i << "\n";
        }
    }

    return 0;
}
