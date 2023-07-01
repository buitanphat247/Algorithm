#include<bits/stdc++.h>
using namespace std;
void sang(int l,int r)
{
    int i,j,max_l=max(l,2),sq_r=sqrt(r);
    vector<int>prime(r-l+1,1),v;
    
    for(i=2; i<=sq_r; i++)
        for(j=max(i*i,(l+i-1)/i*i); j<=r; j+=i)
            prime[j-l]=0;

    for(i=max_l; i<=r; i++)
        if(prime[i-l])
            v.push_back(i);
    cout<<v.size()<<endl;
    v.clear(),prime.clear();
}
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k,a,b;
    cin>>k;
    while(k--)
    {
        cin>>a>>b;
        sang(a,b);
    }
}

