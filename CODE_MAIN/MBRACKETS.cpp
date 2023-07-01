#include<bits/stdc++.h>

using namespace std;

long long countMoves(string brackets)
{
    long long n = brackets.length();
    long long count[2]={0};
    long long moves = 0;
    for (long long i = 0; i < n; i++)
    {
        if (brackets[i] == '(')
            count[0]++;
        else
        {
            if (count[0] > 0)
                count[0]--;
            else
                count[1]++,moves++;
        }
    }
    return (moves+count[1])/2;
}

int main()
{
    freopen("MBRACKETS.INP", "r", stdin);
    freopen("MBRACKETS.OUT", "w", stdout);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string brackets;
        cin >> brackets;
        long long moves = countMoves(brackets);
        cout << moves << endl;
    }

    return 0;
}
