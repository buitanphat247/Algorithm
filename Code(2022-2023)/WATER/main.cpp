#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long x[n];
    for(long long i=0;i<n;i++)
        cin>>x[i];
    long long l=0,r=n-1;
    long long res=0,max_left=-1e9,max_right=-1e9;
    while(l<=r)
    {
        if(x[l]<=x[r])
        {
            if(x[l]>max_left)
                max_left=x[l];
            else
                res+=max_left-x[l];
            l++;
        }else{
            if(x[r]>max_right)
                max_right=x[r];
            else
                res+=max_right-x[r];
            r--;
        }
    }
    cout<<res<<endl;
}
