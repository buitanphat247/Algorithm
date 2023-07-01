#include<bits/stdc++.h>
using namespace std;
const long double pi=3.14;
int main()
{
    long long n,r;
    long double kq;
    long long t;
    cin>>t;
    while(t--)
    {
        cin>>n>>r;
        kq=pow(r,2)*pi;
        if(kq>n*n)
            cout<<"circle"<<endl;
        else
            cout<<"square"<<endl;
    }
    //https://lqdoj.edu.vn/problem/mafix
}
