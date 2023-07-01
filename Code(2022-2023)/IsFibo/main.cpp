#include<bits/stdc++.h>
using namespace std;
const long long mod=1e12;
int main(void)
{
    long long a=0,b=1,c=a+b;
    vector<long long>v;
    v.push_back(a);
    v.push_back(b);
    while(c<=mod)
    {
        v.push_back(c);
        a=b,b=c,c=a+b;
    }
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(binary_search(v.begin(),v.end(),n))
            cout<<"IsFibo"<<endl;
        else
            cout<<"IsNotFibo"<<endl;
    }
}
