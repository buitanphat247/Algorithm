#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long k;
    cin>>k;
    cin>>s;
    long long l=0,r=s.size()-1;
    while(k--)
    {
        swap(s[l],s[r]);
        l++,r--;
    }
    cout<<s<<endl;
}
