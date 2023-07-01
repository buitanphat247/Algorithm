#include <bits/stdc++.h>
#define ld long double
#define maytinh ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define filemo freopen("VALUE.INP","r",stdin); freopen("VALUE.OUT","w",stdout);

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("VALUE.INP","r",stdin);
    freopen("VALUE.OUT","w",stdout);

    ld a,b,c;
    cin >> a >> b >> c;
    ld kq=((a*b+b*c+a*c)/(a*b*c)) + (sqrt(a*b)/(sqrt(a)+sqrt(b)+sqrt(c)));
    cout << fixed << setprecision(2) << kq << endl;
    return 0;
}
