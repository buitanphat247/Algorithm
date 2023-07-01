#include <iostream>
#include <vector>

using namespace std;

int main()
{

    long long n, k;
    cin >> n >> k;

    vector<long long> arr(n);
    for (long long i = 0; i < n; i++)
        cin >> arr[i];

    // Tạo chuỗi kết quả
    vector<long long> result(n);
    for (long long i = 0; i < n; i++)
    {
        long long newPos = (i - k + n) % n;// Vị trí mới sau khi xoay k lần
        result[newPos] = arr[i];
    }
    for (long long i = 0; i < n; i++)
        cout << result[i] << " ";
    return 0;
    //https://oj.luyencode.net/problem/PTIT060
}
