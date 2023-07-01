#include<bits/stdc++.h>
using namespace std;
bool prime(ll k)
{
    if (k < 2)
        return false;
    for (int i = 2; i <=sqrt(k); i++)
        if (k % i == 0)
            return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a, b;
    cin >> a >> b;
    ll kq = (a - b)*(a+b);
    if (prime(kq)==false)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
