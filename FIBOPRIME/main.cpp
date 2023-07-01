#include <iostream>
#include <vector>

using namespace std;

bool isPrime(long long n)
{
    if (n <= 1)
        return false;
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long a, b,count=0;
    cin >> a >> b;
    vector<long long>v;
    v.push_back(0);
    v.push_back(1);
    while(v[v.size()-1]<=b)
    {
        long long next_num=v[v.size()-1]+v[v.size()-2];
        if (next_num <= b && isPrime(next_num))
            count++;
        v.push_back(next_num);
    }
    cout<<count<<endl;
    //https://vinhdinhcoder.net/Problem/Details/4612
}
