#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string s1;
    getline(cin,s);
    getline(cin,s1);

    if(s.size()>s1.size())
        cout<<s.size()-s1.size()<<endl;
    else
        cout<<s1.size()-s.size()<<endl;
}
