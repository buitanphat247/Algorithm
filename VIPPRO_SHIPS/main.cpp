#include<bits/stdc++.h>
using namespace std;
const long long mod=99e9;
int main()
{
   vector<long long>v;
   long long a=0,b=1,c=a+b;
   v.push_back(a);
   v.push_back(b);
   while(c<=mod)
   {
       v.push_back(c);
       a=b;
       b=c;
       c=a+b;
   }
   long long t;
   cin>>t;
   while(t--)
   {
       long long k;
       cin>>k;
       cout<<v[k]<<endl;
   }

}
