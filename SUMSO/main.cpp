#include <iostream>
#include <vector>
using namespace std;

int main() {
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    string s, tmp;
    cin >> s;
    vector<long long> v;
    long long sum=0;
    for (long long i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9')
            tmp += s[i];
        else {
            if (!tmp.empty())
                v.push_back(stoll(tmp)),tmp.clear();
        }
    }
    if (!tmp.empty())
        v.push_back(stoll(tmp));
    for (auto it : v)
        sum+=it;
    cout<<sum<<endl;
    return 0;
    //https://oj.luyencode.net/problem/SUMSO
}
