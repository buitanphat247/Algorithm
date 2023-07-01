#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

struct Fraction {
    int numerator;
    int denominator;
};

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

Fraction addFractions(const Fraction& a, const Fraction& b) {
    int lcmValue = lcm(a.denominator, b.denominator);
    int sum = a.numerator * (lcmValue / a.denominator) + b.numerator * (lcmValue / b.denominator);
    return { sum, lcmValue };
}

Fraction multiplyFractions(const Fraction& a, const Fraction& b) {
    return { a.numerator * b.numerator, a.denominator * b.denominator };
}

Fraction reduceFraction(int numerator, int denominator) {
    int gcdValue = gcd(numerator, denominator);
    numerator /= gcdValue;
    denominator /= gcdValue;
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
    return { numerator, denominator };
}

int main() {
    int n;
    cin >> n;

    vector<Fraction> fractions(n);
    for (int i = 0; i < n; i++) {
        cin >> fractions[i].numerator >> fractions[i].denominator;
    }

    vector<char> operations(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> operations[i];
    }

    vector<Fraction> intermediateResults;
    intermediateResults.push_back(fractions[0]);

    for (int i = 0; i < n - 1; i++) {
        if (operations[i] == '+') {
            intermediateResults.push_back(fractions[i + 1]);
        }
        else if (operations[i] == '-') {
            fractions[i + 1].numerator = -fractions[i + 1].numerator;
            intermediateResults.push_back(fractions[i + 1]);
        }
        else if (operations[i] == '*') {
            Fraction result = multiplyFractions(intermediateResults.back(), fractions[i + 1]);
            intermediateResults.pop_back();
            intermediateResults.push_back(result);
        }
    }

    Fraction finalResult = accumulate(intermediateResults.begin(), intermediateResults.end(), Fraction{0, 1}, addFractions);
    finalResult = reduceFraction(finalResult.numerator, finalResult.denominator);

    cout << finalResult.numerator << " " << finalResult.denominator << endl;

    return 0;
    //https://codeforces.com/gym/347815/problem/6D
}
