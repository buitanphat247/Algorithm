#include<bits/stdc++.h>
using namespace std;

long long solve(string filename)
{
    long long count = 0;
    long long n = filename.length();
    long long removals = 0;
    for (long long i = 0; i < n; i++)
        if (filename[i] == 'x' && filename[i + 1] == 'x' && filename[i + 2] == 'x')
            removals++;
    return removals;
}

int main()
{
    freopen("filename.inp","r",stdin);
    freopen("filename.out","w",stdout);
    long long n;
    cin>>n;
    string filename;
    cin >> filename;
    long long result = solve(filename);

    cout << result << endl;

    return 0;
}
