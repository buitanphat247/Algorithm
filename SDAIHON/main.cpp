#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string toUpperCase(string str) {
    for (char& c : str) {
        c = toupper(c);
    }
    return str;
}

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    if (str1.length() > str2.length()) {
        cout << toUpperCase(str1) << endl;
    } else if (str2.length() > str1.length()) {
        cout << toUpperCase(str2) << endl;
    } else {
        cout << toUpperCase(str2) << endl;
    }

    return 0;
}
//https://vinhdinhcoder.net/Problem/Details/4582
