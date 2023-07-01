#include <iostream>
using namespace std;

int main() {
    int n, x=0;
    cin >> n;
    while(n--){
        string op;
        cin >> op;
        if(op[0]=='+' || op[2]=='+') x++;
        else x--;
    }
    cout << x << endl;
    return 0;
}
