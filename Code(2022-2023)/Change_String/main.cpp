#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(long long i=0; i<s.size(); i++)
    {
        if(i==0&&(s[i]>=97&&s[i]<=122))
            s[i]=(int)s[i]-32;
        if(i!=0&&(s[i]>=65&&s[i]<=90)&&s[i-1]!=' ')
            s[i]=(int)s[i]+32;
        if(s[i]==' '&&(s[i+1]>=97&&s[i+1]<=122))
                s[i+1]=(int)s[i+1]-32;
    }
    cout<<s<<endl;
}
