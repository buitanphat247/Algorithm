#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    int s, total = 0;
    map<int, int> count;

    for (int i = 0; i < n; i++) {
        cin >> s;
        count[s]++;
    }

    total += count[4];
    total += count[3];
    if (count[1] >= count[3]) {
        count[1] -= count[3];
    } else {
        count[1] = 0;
    }
    total += count[2] / 2;
    if (count[2] % 2 == 1) {
        total++;
        if (count[1] >= 2) {
            count[1] -= 2;
        } else if (count[1] == 1) {
            count[1] = 0;
        }
    }
    total += (count[1] + 3) / 4;

    cout << total << endl;

    return 0;
}
