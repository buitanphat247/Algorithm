#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    string s1,s2;
    cin>>s1;
    cin>>s2;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    int x1[200],x2[200],check=true;
    fill(x1,x1+200,0),fill(x2,x2+200,0);
    for(long long i=0; i<s1.size(); i++)
    {
        char c=s1[i];
        x1[(int)c]++;
    }
    for(long long i=0; i<s2.size(); i++)
    {
        char c=s2[i];
        x2[(int)c]++;
    }
    for(long long i=0; i<200; i++)
        if(x1[i]==0&&x2[i]!=0||x1[i]!=0&&x2[i]==0)
            check=false;
    if(check==true)
    {
        cout<<"YES"<<endl;
        for(long long i=0; i<200; i++)
            if(x1[i]!=0)
                cout<<char(i-32);
    }
    else
        cout<<"NO"<<endl;
}
