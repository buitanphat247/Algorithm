#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long col,row,kq=-1;
    cin>>row>>col;
    if(row%2==0&&col%2==0)
        kq=max(kq,row*(col/2));
    else if(row%2!=0&&col%2==0)
        kq=max(kq,row*(col/2));
    else if(row%2==0&&col%2!=0)
        kq=max(kq,row/2*col);
    else if(row%2!=0&&col%2!=0)
        kq=max(kq,(row-1)/2*(col-1)+(row-1)/2+(col-1)/2);
    cout<<kq<<endl;
}
