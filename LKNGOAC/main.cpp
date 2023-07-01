#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    string s;
    cin>>s;
    vector<long long>v1;
    vector<pair<long long,long long>>v;
    for(long long i=0; i<s.size(); i++)
    {
        if(s[i]=='(')
            v1.push_back(i+1);
        else
        {
            if(v1.empty()==false)
            {
                long long index=v1[v1.size()-1];
                v1.pop_back();
                v.push_back(make_pair(index,i+1));
            }
        }
    }
    for(auto it:v)
        cout<<it.first<<" "<<it.second<<endl;
    //https://oj.luyencode.net/problem/LKNGOAC
}
