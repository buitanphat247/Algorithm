#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e3;
string csl(string a, string b)
{
    int     du  = 0;
    int     mid = 0;
    string  res = "";
    a.insert(0, max(0, (int) (b.length() - a.length())), '0');
    b.insert(0, max(0, (int) (a.length() - b.length())), '0');
    for (int i = a.length()-1; i >= 0; --i)
    {
        mid = ((int) a[i] - 48) + ((int) b[i] - 48) + du;
        du  = mid / 10;
        res = (char) (mid % 10 + 48) + res;
    }
    if (du > 0) res = "1" + res;
    return res;
}
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    vector<string> v;
    v.push_back(to_string(0));
    v.push_back(to_string(1));
    v.push_back(to_string(1));
    for(long long i=3;i<=mod;i++)
        v.push_back(csl(v[i-1],v[i-2]));
   for(auto it:v)
        cout<<it<<endl;
}
