#include<bits/stdc++.h>
using namespace std;
int main()
{

    freopen("string.inp","r",stdin);
    freopen("string.out","w",stdout);
    string s1,s2;
    while(cin>>s1>>s2&&s1!="END"&&s2!="END")
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2)
            cout<<"same"<<endl;
        else
            cout<<"different"<<endl;
    }
}
