#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, k;
    cin >> k >> n;
    vector<long long> spf(n + 1, 0);
    spf[1] = spf[0] = 0;
    vector<long long> count(n + 1, 0);
    for (long long i = 2; i <= n; i++)
    {
        if (spf[i] == 0)
        {
            spf[i] = i;

            for (long long j = i * i; j <= n; j += i)
            {
                if (spf[j] == 0)
                {
                    spf[j] = i;
                }
            }
        }
        count[spf[i]]++;
    }
    for (long long i = 0; i < k; i++)
    {
        long long tmp;
        cin >> tmp;
        if (tmp <= n)
            cout << count[tmp] << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
//https://codeforces.com/gym/447232/problem/D
