#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void reduceFraction(long long &numerator, long long &denominator)
{
    long long gcdValue = gcd(numerator, denominator);
    numerator /= gcdValue;
    denominator /= gcdValue;
}
int main()
{
    string s;
    cin>>s;
    long long cnt=1;
    for(long long i=s.size()-1; i>=0; i--)
    {
        if(s[i]!='.')
            cnt*=10;
        else{
            s.erase(s.begin()+i);
            break;
        }
    }
    long long numerator=stoll(s), denominator=cnt;
    reduceFraction(numerator, denominator);
    cout<<numerator<<" "<<denominator<<endl;
    //https://codeforces.com/gym/347815/problem/6C
}
