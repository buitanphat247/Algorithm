#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    int x[n+10][m+10];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> x[i][j];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(i == 0 && j == 0)
                x[i][j] = x[i][j];
            else if(i == 0)
                x[i][j] = x[i][j] + x[i][j-1];
            else if(j == 0)
                x[i][j] = x[i][j] + x[i-1][j];
            else
                x[i][j] = max(x[i][j-1], x[i-1][j]) + x[i][j];
        }
    }
    cout << x[n-1][m-1] << endl;
    return 0;
    //https://oj.luyencode.net/problem/MOVE
}
