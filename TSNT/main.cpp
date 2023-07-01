#include <bits/stdc++.h>
using namespace std;

void pt( long long n)
{
    for (long long i = 2 ; i <= sqrt(n); i++)
    {
        while(n % i == 0)
        {
            cout << i << " ";
            n/=i;
        }
    }
    if (n != 0 && n!=1)
        cout << n;
}
int main()
{
    long long n;
    cin >> n;
    pt(n);
    return 0;
    //https://codeforces.com/gym/347815/problem/3A
}
