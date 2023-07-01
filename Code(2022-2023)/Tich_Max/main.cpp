#include<bits/stdc++.h>
using namespace std;
int cmp(const void* a,const void* b)
{
    int *x=(int*)a;
    int *y=(int*)b;
    return *x>*y;
}
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
    int n;
    cin>>n;
    int x[n];
    for(long long i=0;i<n;i++)
        cin>>x[i];
    qsort(x,n,sizeof(int),cmp);
    long long kq1=x[0]*x[n-1],kq2=x[0]*x[1],kq3=x[n-1]*x[n-2];
    long long kq_end=max(max(kq1,kq2),max(kq2,kq3));
    long long kq_1=x[0]*x[1]*x[2],kq_2=x[n-1]*x[n-2]*x[n-3],kq_3=x[0]*x[n-1]*x[n-2],kq_4=x[0]*x[1]*x[n-1];
    long long kq_end1=max(max(kq_1,kq_2),max(kq_2,kq_3));
    long long kq_end2=max(kq_end1,kq_4);
    cout<<max(kq_end,kq_end2)<<endl;
}
