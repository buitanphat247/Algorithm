#include<bits/stdc++.h>
using namespace std;

long long countCOW(string s)
{
    long long countC = 0;
    long long countCO = 0;
    long long countCOW = 0;
    for (long long i=0;i<s.size();i++)
    {
        if (s[i] == 'C')
            countC++;
        else if (s[i] == 'O')
            countCO += countC;
        else if (s[i] == 'W')
            countCOW += countCO;
    }
    return countCOW;
}
int main()
{
    freopen("cword.inp","r",stdin);
    freopen("cword.out","w",stdout);
    long long N;
    string text;

    cin >> N;
    cin >> text;

    long long result = countCOW(text);

    cout << result << endl;


    return 0;
}
