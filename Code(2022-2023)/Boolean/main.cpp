#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    bool check=true;
    map<char,long long>mp;
    for(long long i=0; i<s.size(); i++)
    {
        char c=(char)s[i];
        mp[c]++;
        if(c=='F')
            check=false;
        else if(c=='T')
            check=true;
    }
    long long tmp;
    for(auto it:mp)
    {
        if(it.first=='n')
        {
            tmp=it.second;
            break;
        }
    }
    if(tmp%2!=0&&check==false)
        cout<<"True"<<endl;
    else if(tmp%2==0&&check==false)
        cout<<"False"<<endl;
    else if(tmp%2!=0&&check==true)
        cout<<"False"<<endl;
    else if(tmp%2==0&&check==true)
        cout<<"True"<<endl;

}
