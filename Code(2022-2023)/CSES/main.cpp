#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    long long x[n];
    for (long long i = 0; i < n; i++)
        cin >> x[i];
    long long l = 0, r = 0;
    long long sum = 0, cnt = 0;
    while (l != n)
    {
        if (sum < k)
        {
            sum += x[r],r++;
            if(sum==k) cnt++;
        }
        else{
            sum -= x[l], l++;
            if(sum==k) cnt++;
        }

    }
    cout << cnt << endl;
}
