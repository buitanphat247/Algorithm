#include<bits/stdc++.h>
using namespace std;
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
string nsb(string a, int b, int l)
{
    string  res = "";
    int     mid = 0;
    int     du  = 0;
    for (int i = a.length() - 1; i >= 0; --i)
    {
        mid     = ((int) a[i] - 48) * b + du;
        du  = mid / 10;
        res = (char) (mid % 10 + 48) + res;
    }
    if (du > 0)
    {
        string  k = to_string(du);
        res = k + res;
    }
    res.insert(res.length(), l, '0');
    return res;
}

string nsl(string a, string b)
{
    string  res = "";
    for (int i = b.length() - 1; i >= 0; --i)
    {
        string  t = nsb(a, (int) b[i] - 48, b.length() - i - 1);
        res     = csl(res, t);
    }
    return res;
}
int main()
{
    long long n;
    cin>>n;
    long long tmp=n*(n+1)/2;
    cout<<nsl(to_string(tmp),to_string(tmp))<<endl;
}
