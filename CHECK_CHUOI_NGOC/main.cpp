#include <bits/stdc++.h>
using namespace std;

bool isMatchingPair(char opening, char closing) {
    if (opening == '(' && closing == ')')
        return true;
    else if (opening == '{' && closing == '}')
        return true;
    else if (opening == '[' && closing == ']')
        return true;
    return false;
}
bool check(string s)
{
    vector<char>v;
    for(long long i=0;i<s.size();i++)
    {
        if(s[i]=='('||s[i]=='['||s[i]=='{')
            v.push_back(s[i]);
        else{
            if(v.size()==0)
                return false;
            else if(!isMatchingPair(v.back(),s[i]))
                return false;
            v.pop_back();
        }
    }
    if(v.size()!=0)
        return false;
    return true;
}
int main() {
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);

    long long n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (check(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
