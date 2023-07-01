#include<bits/stdc++.h>
using namespace std;
struct gps
{
    long long gt,vt;
};
bool cmp(const gps &a,const gps &b)
{
    return a.gt<b.gt;
}

bool cmp1(const gps &a,const gps &b)
{
    return a.vt<b.vt;
}
int main()
{

    int k;
    cin >> k;
    string s;
    cin >> s;
    int l = s.size() - k + 1;
    int r = 0;
    for (int i = 1; i <= k; i++)
    {
        int minvl = 10;
        int n;
        for (int j = r; j < l; j++)
        {
            if (minvl > s[j] - '0')
            {
                minvl = s[j] - '0';
                n = j;
            }
        }
        l++;
        r = n + 1;
        cout << minvl;
    }

}

