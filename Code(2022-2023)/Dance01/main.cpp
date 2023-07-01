#include<bits/stdc++.h>
using namespace std;
int cmp(const void*a ,const void *b)
{
    int *x=(int*)a;
    int *y=(int*)b;
    return *x>*y;
}
int main()
{
    long long n,k,res=0;
    cin>>n>>k;
    int x[n];
    for(long long i=0;i<n;i++)
        cin>>x[i];
    qsort(x,n,sizeof(int),cmp);
    for(auto it:x)
        if(binary_search(x,x+n,it+k)==true)
            res++;
    cout<<res<<endl;
}
