// chưa xong
#include<bits/stdc++.h>
using namespace std;
long long C(long long n,long long k)
{
    if (k == 0 || k == n)
        return 1;
    else
        return C(n - 1, k - 1) + C(n - 1, k);
}
int main()
{
    long long n,k,res=0;
    cin>>n>>k;
    long long x[n];
    map<long long,long long>mp;
    for(long long i=0; i<n; i++)
    {
        cin>>x[i];
        mp[x[i]]++;
    }
    vector<long long>v1,v2;
    for(auto it:mp)
        v1.push_back(it.first),v2.push_back(it.second);

    for(long long i=0; i<v1.size(); i++)
    {

        if(binary_search(v1.begin(),v1.end(),k-v1[i]))
        {
            long long pos=lower_bound(v1.begin(),v1.begin()+v1.size(),k-v1[i])-v1.begin();
            res+=C(v2[i],1)*C(v2[pos],1);
            cout<<v1[i]<<" "<<v1[pos]<<endl;
            cout<<v2[i]<<" "<<v2[pos]<<endl;
            cout<<endl;
        }
    }
    cout<<res<<endl;
}
