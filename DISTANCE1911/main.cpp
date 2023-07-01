#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    vector<long long> v1(200,0),v2(200,0);
    long long cnt=0;
    for(long long i=0; i<s1.size(); i++)
    {
        char c=s1[i];
        v1[int(c)]++;
    }
    for(long long i=0; i<s2.size(); i++)
    {
        char c=s2[i];
        v2[int(c)]++;
    }
    /*
    cout<<endl;
    for(auto it:v1)
            cout<<it.first<<" "<<it.second<<endl;
    cout<<endl;
    for(auto it:v2)
            cout<<it.first<<" "<<it.second<<endl;
    */
    for(long long i=97;i<=122;i++)
        cnt+=abs(v1[i]-v2[i]);
    cout<<cnt<<endl;
}
