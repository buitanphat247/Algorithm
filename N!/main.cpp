#include <boost/multiprecision/cpp_int.hpp>
#include<bits/stdc++.h>

using namespace std;
using namespace boost::multiprecision;

int main() {
    cpp_int n = 1000;
    cpp_int result = 1;

    // Tính n giai thừa
    for (cpp_int i = 1; i <= n; i++) {
        result *= i;
    }

    cout << "n! = " << result << endl;

    return 0;
    //https://lqdoj.edu.vn/problem/giaithuapractice
}
