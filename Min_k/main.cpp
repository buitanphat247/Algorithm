#include<bits/stdc++.h>
using namespace std;
int cmp(const void*a,const void *b)
{
    int *x=(int *)a;
    int *y=(int *)b;
    return *x>*y;
}
int main(void)
{
    long long n,k;
    cin>>n>>k;
    int x[n];
    for(long long i=0;i<n;i++)
        cin>>x[i];
    qsort(x,n,sizeof(int),cmp);
    cout<<x[k-1]<<endl;
}
