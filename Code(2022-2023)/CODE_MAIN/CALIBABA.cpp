#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100;
int n;
int a[MAXN+5];
set<int> S;

void Try(int i, int sum)
{
    if (i > n)
    {
        S.insert(sum);
        return;
    }
    Try(i+1, sum);
    Try(i+1, sum+a[i]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    Try(1, 0);
    cout << S.size() << endl;
    return 0;
}
