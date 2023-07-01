#include <bits/stdc++.h>
using namespace std;
map<long long,long long>mp;
void pt( long long n)
{
    for (long long i = 2 ; i <= sqrt(n); i++)
    {
        while(n % i == 0)
        {
            mp[i]++;
            n/=i;
        }
    }
    if (n != 0 && n!=1)
       mp[n]++;
}
int main()
{

    long long n;
    cin >> n;
    pt(n);
    cout<<mp.size()<<endl;
    return 0;
    //https://codeforces.com/gym/347815/problem/3C
}
