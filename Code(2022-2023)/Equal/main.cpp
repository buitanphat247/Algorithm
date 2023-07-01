#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("EQUA2.INP","r",stdin);
    freopen("EQUA2.OUT","w",stdout);
    long double a, b, c;
    cin >> a >> b >> c;
    long double delta = b * b - 4 * a * c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                cout << "VSN"<<endl;
            else
                cout << "VN"<<endl;
        }
    }
    else
    {
        if (delta < 0)
            cout << "VN"<<endl;
        else if (delta == 0)
            cout << "VSN"<<endl;
        else
        {
            long double x1 = (-b + sqrt(delta)) / (2.0 * a);
            long double x2 = (-b - sqrt(delta)) / (2.0 * a);
            if(x1>x2)
            {
                cout << fixed << setprecision(2) << x2 << endl;
                cout << fixed << setprecision(2) << x1 << endl;
            }
            else
            {
                cout << fixed << setprecision(2) << x1 << endl;
                cout << fixed << setprecision(2) << x2 << endl;
            }
        }
    }

    return 0;
}
