#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
    for(long long i=0; i<s.size(); i++)
        if(s[i]%2==0)
            return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    set<long long> v;
    long long t1=1,t3=3,t5=5,t7=7,t9=9;
    for(long long i=1; i<9999; i+=2)
    {
        t1*=i;
        t3*=i;
        t5*=i;
        t7*=i;
        t9*=i;
        v.insert(t1);
        v.insert(t3);
        v.insert(t5);
        v.insert(t7);
        v.insert(t9);
    }
    for(auto it:v)
        cout<<it<<endl;

}
