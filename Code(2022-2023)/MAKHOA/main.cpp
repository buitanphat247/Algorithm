#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    vector<long long>v1(100,0),v2(100);
    for(long long i=0; i<s1.size(); i++)
        v1[int(s1[i])]++;
    for(long long i=0; i<s2.size(); i++)
        v2[int(s2[i])]++;
    for(long long i=58; i>=48; i--)
    {
        if(v1[i]>0 && v2[i]>0)
            cout<<char(i);
    }
}
