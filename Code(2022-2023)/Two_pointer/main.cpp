#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long>v(n);
    for(long long i=0;i<n;i++)
        cin>>v[i];
    long long left=0,right=n-1,check=1;
    while(left!=right)
    {
        if(v[left]!=v[right])
        {
            check=0;
            break;
        }
        else
            left++,right--;
    }
    if(check)
        cout<<true<<endl;
    else
        cout<<false<<endl;
    memset(v,1,sizeof())// dùng khi để tạo mảng đánh dấu
}
