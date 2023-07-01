#include<bits/stdc++.h>
using namespace std;
const long long mod=1e6;
int main()
{
    bool is_square[mod+1] = {}; // Khởi tạo tất cả các phần tử bằng 0
    for (int i = 1; i*i <= mod; i++)
    {
        is_square[i*i] = true; // Đánh dấu các số chính phương
    }
    vector<long long>v;
    for(long long i=1;i<=mod;i++)
        if(is_square[i])
            v.push_back(i);
    long long n;
    cin>>n;
    if(binary_search(v.begin(),v.end(),n))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
