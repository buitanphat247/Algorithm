#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
    long long l=0,r=s.size()-1,dem=0;
    while(l<=r)
    {
        if(dem==2)
            break;
        else
        {
            if(s[l]!=s[r])
                s[l]=(char)s[r],l++,r--,dem++;
            else
                l++,r--;
        }
    }
    string tmp=s;
    reverse(tmp.begin(),tmp.end());
    if(tmp==s)
        return 1;
    else
        return 0;
}
int main()
{
    for (string s; cin >> s; cout << (check(s) ? "YES" : "NO") << '\n');
}
