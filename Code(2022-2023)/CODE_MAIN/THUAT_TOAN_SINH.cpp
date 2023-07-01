#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
bool check()
{
    string tmp=s;
    reverse(tmp.begin(),tmp.end());
    if(tmp==s)
        return true;
    else
        return false;
}
void solve(long long i)
{
    for (long long j = 48; j <= 49; j++)
    {
        s[i] = (char)j;
        if (i == n)
        {
            if (check())
            {
                cout << s << endl;
                return;
            }
        }
        else
            solve(i + 1);
    }
}
int main()
{
    cin>>n;
    for(long long i=0;i<n;i++)
        s+='0';
    solve(0);
}
