#include <iostream>
#include <vector>

using namespace std;
const long long MOD=5000000;

int main()
{
    vector<long long> largestPrimeFactor(MOD + 1, 0);
    for (long long i = 2; i <= MOD; i++)
        if (largestPrimeFactor[i] == 0)
            for (long long j = i; j <= MOD; j += i)
                largestPrimeFactor[j] = i;
    long long n,k,cnt=0;
    cin>>n>>k;
    for(long long i=0; i<=n; i++)
        if(largestPrimeFactor[i]<=k&&largestPrimeFactor[i]!=0)
            cnt++;
    cout<<cnt<<endl;
    //https://codeforces.com/gym/347815/problem/5E
    return 0;
}
