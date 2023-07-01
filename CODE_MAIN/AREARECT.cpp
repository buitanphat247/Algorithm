#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("AREARECT.INP","r",stdin);
    freopen("AREARECT.OUT","w",stdout);
    double S, p;
    cin >> S;
    cin >> p;
    double a, b;
    a = (p + sqrt(p * p - 16 * S)) / 4;
    b = (p - sqrt(p * p - 16 * S)) / 4;
    cout << b<<endl<<a<<endl;

    return 0;
}

