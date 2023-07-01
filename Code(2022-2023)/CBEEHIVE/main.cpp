#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("CBEEHIVE.INP","r",stdin);
    freopen("CBEEHIVE.OUT","w",stdout);
    ll n,kq;
    cin >> n;
    kq = 1+3*(n-1)*n;
    cout << kq << endl;
    return 0;
}
