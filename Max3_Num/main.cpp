#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    cout<<max(max(a,b),max(b,c))<<endl;
}
