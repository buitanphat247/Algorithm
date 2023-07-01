#include<bits/stdc++.h>
using namespace std;
string add(string num1, string num2)
{
    string result = "";
    int len1 = num1.size(), len2 = num2.size();
    int len = max(len1, len2);
    int carry = 0;
    for (int i = 0; i < len; i++)
    {
        int digit1 = i < len1 ? num1[len1 - i - 1] - '0' : 0;
        int digit2 = i < len2 ? num2[len2 - i - 1] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result = char(sum % 10 + '0') + result;
    }

    if (carry > 0)
        result = char(carry + '0') + result;
    return result;
}
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    string a,b;
    cin>>a;
    cin>>b;
    cout<<add(a,b)<<endl;
}
