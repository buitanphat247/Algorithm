#include<bits/stdc++.h>
using namespace std;
struct content
{
    string s;
    long long id;
    long long num_s;
};
bool comp(const content& a,const content& b)
{
    if(a.num_s==b.num_s)
        return a.id<b.id;
    return (a.num_s<b.num_s);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("TROCHOI.inp", "r", stdin);
    freopen("TROCHOI.out", "w", stdout);
    long long n,num_d=0;
    cin>>n;
    vector<content> v(n);
    string str;
    for(long long i=0; i<n; i++)
    {
        num_d=0;
        cin>>str;
        for(long long i=0; i<str.size(); i++)
            if((long long)str[i]>=48&&(long long)str[i]<=57)
                num_d++;
        v[i].s=str,v[i].id=i,v[i].num_s=num_d;
    }
    sort(v.begin(),v.end(),comp);
    for(long long i=0; i<n; i++)
    {
        cout<<v[i].s<<endl;
    }
}

















