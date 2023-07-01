#include<bits/stdc++.h>
using namespace std;

vector<int> computeLPS(const string& pattern) {
    int n = pattern.length();
    vector<int> lps(n, 0);
    int len = 0;
    int i = 1;

    while (i < n) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps;
}

vector<int> findStringOccurrences(const string& s, const string& t) {
    vector<int> pos;
    int m = t.length();
    int n = s.length();
    vector<int> lps = computeLPS(t);
    int i = 0;
    int j = 0;

    while (i < n) {
        if (t[j] == s[i]) {
            j++;
            i++;
        }

        if (j == m) {
            pos.push_back(i - j + 1);
            j = lps[j - 1];
        } else if (i < n && t[j] != s[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }

    return pos;
}

int main() {
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);

    string s, t;
    cin >> s >> t;

    vector<int> occurrences = findStringOccurrences(s, t);

    for (int i = 0; i < occurrences.size(); i++) {
        cout << occurrences[i] << " ";
    }

    return 0;
    //https://oj.luyencode.net/problem/KHOPXAU
}
