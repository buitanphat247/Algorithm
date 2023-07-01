#include <bits/stdc++.h>
#define ll long long

using namespace std;
bool pr[100000001];
bool sang(ll n)
{
	pr[0] = pr[1] = false;
	for(ll i = 2; i <= n; i++)
		pr[i] = true;
	for(ll j = 2; j * j <= n; j++)
        {
		if(pr[j] == true)
		{
			for(ll i = j * 2; i <= n; i += j)
				pr[i] = false;
		}
	}
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);
    freopen("primemax.inp","r",stdin);
    freopen("primemax.out","w",stdout);
    ll n;
    cin >> n;
	sang(n);
	for(ll i =n-1; i >= 1; i--)
        {
		ll tmp = n / i;
		if (pr[i] && pr[tmp] && tmp != i && tmp * i <= n)
            {
			cout << tmp << " " << i << endl;
			break;
		}
	}
	return 0;
}
