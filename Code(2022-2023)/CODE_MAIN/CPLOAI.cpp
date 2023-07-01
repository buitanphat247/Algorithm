#include<bits/stdc++.h>
using namespace std;

const long long N = 1e4;

int main()
{
    freopen("CPLOAI.INP", "r", stdin);
    freopen("CPLOAI.OUT", "w", stdout);

    long long n;
    cin >> n;
    long long a[n];
    long long c[N + 1]= {0};
	for (int i = 0; i < n; i++)
    {
	cin >> a[i];
    	c[a[i]]++;
		}    
    long long dem = 0;
    for (int i = 0; i <= N; i++)
        if (c[i] != 0)
            dem++;
    cout << dem << endl;
    for (int i = 0; i <= N; i++)
    {
        if (c[i] != 0)
            cout << i << " ";
    }

    return 0;
}
