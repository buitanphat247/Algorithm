#include <iostream>
using namespace std;

bool canAttack(long long x, long long y, long long a, long long b)
{
    if (x == a || y == b)
    {
        return true;
    }
    return false;
}

int main()
{
    long long t;
    long long N, x, y, a, b;
    cin >> t;
    while(t--)
    {
        cin >> x >> y;
        cin >> a >> b;

        if (canAttack( x, y, a, b))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
    //https://lqdoj.edu.vn/problem/checkchess
}
