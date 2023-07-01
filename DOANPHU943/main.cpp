#include<bits/stdc++.h>
using namespace std;
struct line
{
    long long a,b;
};
bool cmp(line v1,line v2)
{
    if(v1.a==v2.a)
        return v1.b<v2.b;
    return v1.a<v2.a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("DOANPHU943.inp","r",stdin);
    freopen("DOANPHU943.out","w",stdout);
    long long n;
    cin>>n;
    line x[n];
    for(long long i=0; i<n; i++)
        cin>>x[i].a>>x[i].b;
    sort(x,x+n,cmp);
    long long s_index=x[0].a,e_index=x[0].b,max_len=-1e9;

    for(long long i=1; i<n; i++)
    {
        if(x[i].a<=e_index)
            e_index=max(e_index,x[i].b);
        else if(x[i].a>e_index)
        {
            max_len=max(max_len,e_index-s_index);
            s_index=x[i].a;
            e_index=x[i].b;
        }
    }
    max_len=max(max_len,e_index-s_index);
    cout<<max_len<<endl;
}
