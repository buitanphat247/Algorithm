#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s = "12345678";
    string lr;
    cin >> lr;
    long long cnt_left = 0, cnt_right = 0;
    for (long long i = 0; i < lr.size(); i++)
    {
        if (lr[i] == 'R')
        {
            char c = s[s.size()-1];
            s.insert(s.begin() + 0, c);
            s.pop_back();
        }
        else
        {
            char c = s[0];
            s.push_back(c);
            s.erase(s.begin() + 0);
        }
    }
    cout << s << endl;
}
