#include<bits/stdc++.h>
using namespace std;
int cmp(const void* a,const void *b)
{
    int *x=(int*)a;
    int *y=(int*)b;
    return *x>*y;
}
int main()
{
    int n;
    cin>>n;
    int v[n];
    for(long long i=0;i<n;i++)
        cin>>v[i];
    qsort(v,n,sizeof(int),cmp);
    cout<<max((v[n-1]-v[1])*(v[n-2]-v[0]),(v[n-1]-v[0])*(v[n-2]-v[1]))<<endl;
}
