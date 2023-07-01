#include<bits/stdc++.h>
using namespace std;
int main()
{

    freopen("NGOAC.inp","r",stdin);
    freopen("NGOAC.out","w",stdout);
    string s;
    cin>>s;
    vector<char>v;
    for(long long i=0; i<s.size(); i++)
    {
        if(s[i]!='('&&s[i]!=')')
        {
            cout<<"KHONG HOP LE"<<endl;
            return 0;
        }
        if(s[i]=='(')
            v.push_back('(');
        else if(s[i]==')')
        {
            if(v.empty())
            {
                cout<<"KHONG HOP LE"<<endl;
                return 0;
            }
            else if(v.back()=='(')
            {
                v.pop_back();
            }
        }
    }
    if(!v.empty())
    {
        cout<<"KHONG HOP LE"<<endl;
        return 0;

    }
    cout<<"DUNG"<<endl;
}
