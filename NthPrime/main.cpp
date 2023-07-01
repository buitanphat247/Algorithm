#include <iostream>
#include <vector>

using namespace std;

bool isPrime(long long n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int  main() {
    long long T;
    cin >> T;
    vector<long long> primes;
    long long num = 2;
    while (primes.size() < 100000) {
        if (isPrime(num))
            primes.push_back(num);
        num++;
    }

    for (long long i = 0; i < T; i++) {
        long long N;
        cin >> N;
        cout << primes[N - 1] << endl;
    }

    return 0;
    //https://vinhdinhcoder.net/Problem/Details/4608
}
