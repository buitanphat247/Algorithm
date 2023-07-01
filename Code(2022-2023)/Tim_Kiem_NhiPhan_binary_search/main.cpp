// binary_search() đây là hàm tìm kiếm nhị phân yêu cầu phải sắp xếp trước khi tìm kiếm
// lower_bound() đây là hàm tìm kiếm nhị phân nhưng trả về vị trí phần tử đầu tiên xuất hiện trong mảng lưu ý phải sắp xếp trước
// upper_bound() đây là hàm tìm kiếm nhị phân nhưng trả về vị trí phần tử cuối cùng xuất hiện trong mảng và lưu ý phải sắp xếp trước
// sort(x,x+n) đây là hàm sắp xếp
// find() đây là hàm tìm kiếm nhị phân trả và không yêu cầu sắp xếp
// > sắp xếp giảm ngược lại là tăng
#include<bits/stdc++.h>
using namespace std;
bool cmp(long long a,long long b)
{
    return a>b;
}
int main(void)
{
    /*
    tìm kiếm nhị phân binary_search bằng mảng;
    long long n;
    cin>>n; // nhập vô số phần tử của mảng
    long long arr[n];
    for(long long i=0;i<n;i++)
        cin>>arr[i]; // nhập phần tử thứ i
    long long value_search;// giá trị người dùng cần tìm;
    cin>>value_search; // nhập vô giá trị cần tìm kiếm
    sort(arr,arr+n);
    if(binary_search(arr,arr+n,value_search)==true)
        cout<<true<<endl;
    else
        cout<<false<<endl;
    // tìm kiếm nhị phân binary_search bằng vector;
    long long n;
    cin>>n; // nhập vô số phần tử của mảng
    vector<long long> arr(n);
    for(long long i=0;i<n;i++)
        cin>>arr[i]; // nhập phần tử thứ i
    long long value_search;// giá trị người dùng cần tìm;
    cin>>value_search; // nhập vô giá trị cần tìm kiếm
    sort(arr.begin(),arr.end());
    for(auto it:arr)
        cout<<it<<" ";
    cout<<endl;
    if(binary_search(arr.begin(),arr.end(),value_search)==true)
        cout<<true<<endl;
    else
        cout<<false<<endl;
    */
}


