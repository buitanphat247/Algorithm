#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);

    long long n;
    cin >> n;
    set<long long> nums;
    long long num_max = LLONG_MIN, num_min = LLONG_MAX;
    for (long long i = 0; i < n; i++)
    {
        long long num;
        cin >> num;
        nums.insert(num);
        num_max = max(num_max, num);
        num_min = min(num_min, num);
    }
    cout << num_min << " " << num_max << endl;
    for (long long num = num_min + 1; num < num_max; num++)
        if (nums.find(num) == nums.end())
            cout << num << " ";
    return 0;
}
