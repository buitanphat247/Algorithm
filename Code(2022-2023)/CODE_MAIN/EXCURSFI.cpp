#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[5005],f[5005];
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("EXCURSFI.inp","r",stdin);
    freopen("EXCURSFI.out","w",stdout);
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    int ans = 0;
    for(int i=1; i<=n; i++)
    {
        if (a[i] % 2 != 0)
        {
            continue;
        }
        f[i] = 1;
        for(int j = 1; j < i; j++)
        {
            if(a[j]%2==0 && a[j]<a[i])
            {
                f[i] = max(f[i], f[j] + 1);
            }
        }
        ans = max(ans, f[i]);
    }
    cout << ans << endl;
    return 0;
}

