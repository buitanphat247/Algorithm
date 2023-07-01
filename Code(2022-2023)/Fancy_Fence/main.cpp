#include <iostream>
#include <cmath>

using namespace std;

bool can_create_regular_polygon(int n, int a)
{
    if (n < 3)
        return false;
    double angle = (n - 2) * 180.0 / n;
    if (abs(angle - a) < 1e-6)
        return true;
    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;

        bool flag = false;
        for (int i = 3; i <= 180; i++)
        {
            if (can_create_regular_polygon(i, a))
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
