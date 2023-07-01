#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);

    long long n;
    cin >> n;

    while(n--)
    {
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        long long tich = 0;
        long long base = 1;
        for(long long i = 0; i < s.size(); i++)
        {
            long long num = s[i] - '0';
            tich += num * base;
            base*=2;
        }
        cout<<tich<<endl;
    }

    return 0;
}
//https://oj.luyencode.net/problem/CVB2D
