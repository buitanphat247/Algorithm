#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    string check;
    if(a+b>c && a+c>b && b+c>a)
    {
        if(a==b || a==c || b==c)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
