#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin>>c;
    // 122 z
    // 97 a
    // 90 Z
    // 65 A
    if((int)c>=97&&(int)c<=122)
        cout<<(char)((int)c-32)<<endl;
    else if((int)c>=65&&(int)c<=90)
        cout<<(char)((int)c+32)<<endl;
}
