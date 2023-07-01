#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.size()==1)
        {
            cout << "BIGGEST\n";
            continue;
        }
        long long i,j;
        for(i=s.size()-2; i>=0; i--)
            if(s[i]-'0'<s[i+1]-'0')
                break;
        if (i < 0)
        {
            cout << "BIGGEST\n";
            continue;
        }
        for(j=s.size()-1; j>i; j--)
            if(s[j]-'0'>s[i]-'0')
                break;
        swap(s[i],s[j]);
        cout<<s<<endl;
        reverse(s.begin() + i + 1, s.begin() + s.size());
        cout<<s<<endl;
    }

}
