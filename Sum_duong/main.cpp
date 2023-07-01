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
int main()
{
    long long cnt=0,n;
    cin>>n;
    long long x[n],sum=0;
    for(long long i=0;i<n;i++)
    {
        cin>>x[i];
        if(x[i]>0)
            cnt++,sum+=x[i];
    }
    cout<<cnt<<" "<<sum<<endl;
}
