#include<bits/stdc++.h>
using namespace std;
vector<long long>arr,crr;
void towers(long long n,char a,char b,char c)
{
    if(n==1)
    {
        arr.push_back(a);
        crr.push_back(c);
        return;
    }
    towers(n-1,a,c,b);
    towers(1,a,b,c);
    towers(n-1,b,a,c);
}
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    char A='1',B='2',C='3';
    int n;
    cin>>n;
    towers(n,A,B,C);
    cout<<arr.size()<<endl;
    for(long long i=0; i<arr.size(); i++)
        cout<<arr[i]-48<< " "<<crr[i]-48<<endl;
    //https://lqdoj.edu.vn/problem/cses2165
}
