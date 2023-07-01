#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

struct Student {
    string name;
    long double point;
};

long double convertToNumber(const string& str) {
    istringstream iss(str);
    long double num;
    iss >> num;
    return num;
}

int main() {
    long long n;
    cin >> n;
    cin.ignore();

    vector<Student> students;
    long double maxPoint = -1e9;
    string maxName;

    for (long long i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        string name = line.substr(0, line.find_last_of(' '));
        string pointStr = line.substr(line.find_last_of(' ') + 1);
        long double point = convertToNumber(pointStr);

        if (point > maxPoint) {
            maxPoint = point;
            maxName = name;
        }

        students.push_back({name, point});
    }

    cout << maxName << endl;

    return 0;
    //https://vinhdinhcoder.net/Problem/Details/4598
}
