#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    string s; cin >> s;
    string a = "hello";
    int k = 0;
    for (int i = 0; i < s.size(); i++){
    	if (s[i] == a[k]) k++;
	}
	if (k == 5) cout << "YES"; else cout << "NO";
}
//https://oj.luyencode.net/problem/HELLO
