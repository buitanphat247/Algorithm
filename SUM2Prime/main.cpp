#include<bits/stdc++.h>
using namespace std;

int countNumbersWith9Divisors(int N) {
    const int MAX = 1000000000;

    int divisors[MAX + 1] = {0};

    for (int i = 1; i <= MAX; i++) {
        for (int j = i; j <= MAX; j += i) {
            divisors[j]++;
        }
    }

    // Đếm số lượng số có đúng 9 ước không lớn hơn N
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (divisors[i] == 9) {
            count++;
        }
    }

    return count;
}

int main() {

    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    int N;
    std::cin >> N;

    int result = countNumbersWith9Divisors(N);
    std::cout << result << std::endl;

    return 0;
}
