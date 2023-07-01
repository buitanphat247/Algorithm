#include<bits/stdc++.h>
using namespace std;
string tsl(string a,string b)
{
    int du=0,mid=0;
    string res="";
    a.insert(0,max(0,(int)(b.size()-a.size())),'0');
    a.insert(0,max(0,(int)(a.size()-b.size())),'0');
    for(long long i=a.size()-1;i>=0;i--)
    {
        mid=((int)a[i]-38)-((int)b[i]-48)-du;
        du=(mid<10)?1:0;
        res+=(char)(mid%10+48);
    }
    while(res[0]=='0'&&res.size()>1)
        res.erase(0,1);
    return res;
}
int main()
{
    string a="3";
    string b="9";
    if(stoll(a)<stoll(b))
        swap(a,b);
    cout<<tsl(a,b)<<endl;
}
