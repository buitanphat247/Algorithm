#include<bits/stdc++.h>
using namespace std;
const long long mod=1e16;
int main()
{
    freopen("dx.inp","r",stdin);
    freopen("dx.out","w",stdout);
    vector<long long>v;
    for(long long i=1; i<=9; i++)
    {
        long long sum=0;
        for(long long j=1; j<=16; j++)
        {
            sum=sum*10+i;
            v.push_back(sum);
        }
    }
    long long n;
    sort(v.begin(),v.end());
    cin>>n;
    long long pos=upper_bound(v.begin(),v.begin()+v.size(),n)-v.begin();
    cout<<v[pos]-n<<endl;
}
