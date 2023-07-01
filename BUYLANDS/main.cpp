#include <bits/stdc++.h>
using namespace std;

const long long  MAXN = 1e6;

int  main()
{
    freopen("1.INP", "r", stdin);
    freopen("1.OUT", "w", stdout);
    long long  n,sum=0;
    cin >> n;
    vector<long long > squares;
    for (long long  i = 1; i * i <= n; i++)
        squares.push_back(i * i);
    sort(squares.rbegin(), squares.rend());
    vector<long long > results;
    for (long long  i = 0; i < squares.size(); i++)
       if (sum + squares[i] <= n)
            sum += squares[i],results.push_back(squares[i]);
    for (long long  i = 0; i < results.size(); i++)
        cout << sqrt(results[i])*1LL << " ";
    return 0;
}
