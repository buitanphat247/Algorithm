#include<bits/stdc++.h>
using namespace std;
string add(string a,string b)
{
    int du=0,mid=0;
    string res="";
    a.insert(0,max(0,(int)(b.size()-a.size())),'0');
    b.insert(0,max(0,(int)(a.size()-b.size())),'0');
    for(long long i=a.size()-1; i>=0; i--)
    {
        mid=((int)a[i]-48)+((int)b[i]-48)+du;
        du=mid/10;
        res+=(char)(mid%10+48);
    }
    if(du>0)
        res+="1";
    reverse(res.begin(),res.end());
    return res;
}

string hsl(string a,string b)
{
    int du=0,mid=0;
    string res="";
    a.insert(0,max(0,(int)(b.size()-a.size())),'0');
    b.insert(0,max(0,(int)(a.size()-b.size())),'0');
    for(long long i=a.size()-1; i>=0; i--)
    {
        mid=((int)a[i]-38)-((int)b[i]-48)+du;
        du=(mid<10)?1:0;
        res+=(char)(mid%10+48);
    }
    while(res[0]=='0'&&res.size()>1)
        res.erase(0,1);
    return res;
}

string multiply(string a, string b)
{
    string res = "";
    for (int i = b.length() - 1; i >= 0; i--)
    {
        string temp = "";
        int carry = 0;
        for (int j = a.length() - 1; j >= 0; j--)
        {
            int product = (b[i] - '0') * (a[j] - '0') + carry;
            carry = product / 10;
            temp.push_back(product % 10 + '0');
        }
        if (carry > 0)
            temp.push_back(carry + '0');
        reverse(temp.begin(), temp.end());
        temp.append(b.length() - i - 1, '0');
        res = add(res, temp);
    }
    return res;
}


int main()
{

    cout<<add("2","7")<<endl;
    cout<<hsl("9","8")<<endl;
    cout<<multiply("9","8")<<endl;

}
