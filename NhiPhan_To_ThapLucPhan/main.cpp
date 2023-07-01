#include<bits/stdc++.h>
using namespace std;

string decimalToHex(long long decimal)
{
    string hex = "";
    string hexDigits = "0123456789ABCDEF";

    while (decimal > 0)
    {
        long long remainder = decimal % 16;
        hex = hexDigits[remainder] + hex;
        decimal /= 16;
    }

    return hex;
}

int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n;
    cin>>n;
    while(n--)
    {
        long long decimal;
        cin >> decimal;

        string hex = decimalToHex(decimal);
        cout << hex << endl;
    }
    return 0;
}
