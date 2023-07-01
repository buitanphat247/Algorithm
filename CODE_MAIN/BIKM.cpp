#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    unordered_map<int, int> last_occurrence; // LÆ°u vá»‹ trÃ­ xuáº¥t hiá»‡n gáº§n nháº¥t cá»§a má»™t mÃ u
    bool found = false;
    long long kq=-1;
    for (int i = 1; i <= n; i++)
    {
        long long color;
        cin >> color;

        if (last_occurrence.count(color) && i - last_occurrence[color] <= k)
        {
            kq=max(color,kq);
            found = true;
        }
        last_occurrence[color] = i;
    }

    cout<<kq<<endl;

    return 0;
}