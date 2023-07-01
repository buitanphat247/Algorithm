#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    string s;
    cin>>n;
    cin>>s;
    if(n>26)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    else
    {
        long long cnt=0;
        long long v[10000];
        for(long long i=0; i<s.size(); i++)
        {
            v[int(s[i])]++;
            if(v[int(s[i])]>1)
                cnt++;
        }
        cout<<cnt<<endl;
    }

}
