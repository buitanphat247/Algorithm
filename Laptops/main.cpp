#include<bits/stdc++.h>
using namespace std;
struct laptop{
    long long cost,value;
};
bool cmp1(const laptop&a,const laptop&b)
{
    return a.cost<b.cost;
}
int main()
{
    long long n;
    cin>>n;
    vector<laptop>v(n);
    for(long long i=0;i<n;i++)
        cin>>v[i].cost>>v[i].value;
    sort(v.begin(),v.end(),cmp1);
    bool check=false;
    for(long long i=0;i<n;i++)
    {
        if(v[i].cost<v[i+1].cost&&v[i].value>v[i+1].value)
        {
            check=true;
            break;
        }
    }
    if(check)
        cout<<"Happy Alex"<<endl;
    else
        cout<<"Poor Alex"<<endl;
}
