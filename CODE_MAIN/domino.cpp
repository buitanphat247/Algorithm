#include <bits/stdc++.h>

using namespace std;
int t;
int main()
{
    freopen("domino.inp","r",stdin);
    freopen("domino.out","w",stdout);
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        for (int i=0; i<n; i++)
        if (s[i] == 'U') cout << 'D';
        else if (s[i] == 'D') cout << 'U';
        else cout << s[i];
        cout << '\n';
    }
    return 0;
}
