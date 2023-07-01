#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, flag=0;
ll a[100005], res;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("TEARRNEG.INP", "r", stdin);
    freopen("TEARRNEG.OUT", "w", stdout);
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    for(int i=1; i<=n; i++)
    {
        if(a[i] < 0)
        {
            res=a[i];
            flag=1;
            break;
        }
        else
            flag=0;
    }
    if(flag ==0)
        cout << "OK" << endl;
    else
        cout << res << endl;
    return 0;
}

