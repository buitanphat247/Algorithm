#include <iostream>
using namespace std;

bool containsNumber(long long k, long long x)
{
    if (x == k)
        return true;
    string kStr = to_string(k);
    string xStr = to_string(x);

    if (xStr.find(kStr) != string::npos)
        return true;
    return false;
}

int main()
{
    long long k, L, R;
    cin >> k >> L >> R;

    long long count = 0;
    for (long long x = L; x <= R; x++)
        if (containsNumber(k, x))
            count++;

    cout << count << endl;

    return 0;
}
