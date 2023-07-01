#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    string s[10] = {"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
    string tmp, n;
    cin >> n;
    for (long long i = 0; i < 10; i++)
    {
        long long k = 0;
        for (long long j = 0; j < n.size(); j++)
        {
            if (n[j] == s[i][k])
            {
                tmp += n[j];
                k++;
            }
            if (tmp == s[i])
            {
                cout << s[i] << endl;
                return 0;
            }
        }
        tmp = "";
    }
    cout << "CHIA BUON, PHAI VE ROI, HEN NAM SAU NHE!!" << endl;
    return 0;
    //https://oj.luyencode.net/problem/PTIT037
}
