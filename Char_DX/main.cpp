#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    getline(cin,s);
    getline(cin,p);

    long long l=0,cnt=0,r=s.size()-1;
    while(l<s.size()&&r>=0)
    {
        if((int)s[l]==(int)p[r]&&l+r+1==s.size())
            cnt++;
        l++,r--;
    }
    cout<<cnt<<endl;
}
