#include <iostream>
#include <string>

using namespace std;

string replaceString(string str, const string& from, const string& to) {
    size_t pos = 0;
    while ((pos = str.find(from, pos)) != string::npos) {
        str.replace(pos, from.length(), to);
        pos += to.length();
    }
    return str;
}

int main() {

    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    string s;
    getline(cin, s);

    string replaced = replaceString(s, "anh", "em");

    cout << replaced << endl;

    return 0;
    //https://vinhdinhcoder.net/Problem/Details/4583
}
