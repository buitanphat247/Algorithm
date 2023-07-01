#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long cnt=0,k=9;
    set<long long>s;
    for(long long i=1; i<=20; i+=2)
        s.insert(i);
    for(long long i=234; i<=1e3; i++)
    {
        long long tmp=i*2+k;
        s.insert(tmp);
        cnt++;
        if(cnt==5)
            k=k+9+1,cnt=0;
    }
    for(auto it:s)
        cout<<it<<endl;
}
