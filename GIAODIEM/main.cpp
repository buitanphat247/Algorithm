#include <iostream>
#include <fstream>
using namespace std;

int main() {

    long long n, h = 24 * 2014, d, tu;
    cin >> n;
    tu = ((n % h) * ((n - 1) % h) * ((n - 2) % h) * ((n - 3) % h)) % h;
    d = (tu / 24) % 2014;
    cout << d << endl;
    return 0;
    //https://codeforces.com/gym/347815/problem/1B
}
