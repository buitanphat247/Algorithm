#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    string s=to_string(n);
    string tmp=s;
    reverse(s.begin(),s.end());
    if(s==tmp)
        cout<<true<<endl;
    else
        cout<<false<<endl;
}
