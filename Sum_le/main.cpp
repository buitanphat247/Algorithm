#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum=0;
    cin>>n;
    while(n--)
    {
        long long tmp;
        cin>>tmp;
        if(tmp%2!=0)
            sum+=tmp;
    }
    cout<<sum<<endl;
    //https://lqdoj.edu.vn/problem/av02
}
