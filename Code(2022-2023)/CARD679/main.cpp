#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long>v(n+10,0);
    // duong la 1
    // tung la 0
    for(long long i=1;i<=n/2;i++)
    {
        long long x;
        cin>>x;
        v[x]=1;
    }
    long long res_d=0,res_t=0,max_duong=-1e9,max_tung=-1e9;
    for(long long i=1;i<=n;i++)
    {
        if(v[i]==1){
            res_d++;
            max_duong=max(res_d,max_duong);
            if(v[i+1]!=1)
                res_d=0;
        }else{
            res_t++;
            max_tung=max(max_tung,res_t);
            if(v[i+1]!=0)
                res_t=0;
        }
    }
    if(max_duong>max_tung)
        cout<<"DUONG"<<endl;
    else if(max_duong<max_tung)
        cout<<"TUNG"<<endl;
    else if(max_duong==max_tung)
    {
        if(v[n]==1)
            cout<<"DUONG"<<endl;
        else
            cout<<"TUNG"<<endl;
    }
}
