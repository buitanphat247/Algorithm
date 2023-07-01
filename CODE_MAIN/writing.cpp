#include<bits/stdc++.h>
using namespace std;

long long solve(string W, string S)
{
    long long g = W.length();
    long long n = S.length();
    long long cnt_w[300]= {0};
    for (long long i=0;i<g;i++)
        cnt_w[int(W[i])]++;
    long long cnt_s[300]= {0};
    long long windowStart = 0, windowEnd = 0;
    long long matches = 0;
    long long result = 0;
    while (windowEnd < n)
    {
        char rightChar = S[windowEnd];
        cnt_s[rightChar]++;
        if (cnt_s[rightChar] <= cnt_w[rightChar])
            matches++;
        if (windowEnd - windowStart + 1 > g)
        {
            char leftChar = S[windowStart];
            if (cnt_s[leftChar] <= cnt_w[leftChar])
                matches--;
            cnt_s[leftChar]--;
            windowStart++;
        }
        if (matches == g)
            result++;
        windowEnd++;
    }
    return result;
}


int main()
{

    freopen("writing.inp","r",stdin);
    freopen("writing.out","w",stdout);
    long long g, n;
    cin >> g >> n;
    string W, S;
    cin >> W >> S;

    long long cnt = solve(W, S);
    cout << cnt << endl;

    return 0;
}
