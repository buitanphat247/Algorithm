#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a;
    cin>>a;
    float b=roundf(a * 10)/ 10;
    if(b-(int)b<=0.5)
        cout<<(int)b<<endl;
    else
        cout<<(int)b+1<<endl;
}
