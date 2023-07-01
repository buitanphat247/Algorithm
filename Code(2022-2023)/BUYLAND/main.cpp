#include <bits/stdc++.h>
using namespace std;

const long long  MAXN = 1e6;

int  main()
{
    freopen("BUYLAND.INP", "r", stdin);
    freopen("BUYLAND.OUT", "w", stdout);
    long long  n;
    cin >> n;
    vector<long long > squares;
    for (long long  i = 1; i * i <= n; i++)
        squares.push_back(i * i);
    sort(squares.rbegin(), squares.rend());
    long long  sum = 0;
    vector<long long > results;
    for (long long  i = 0; i < squares.size() && sum < n; i++)
        if (sum + squares[i] <= n)
            sum += squares[i],results.push_back(squares[i]);
    for (long long  i = 0; i < results.size(); i++)
        cout << sqrt(results[i]) << " ";
    return 0;
}

