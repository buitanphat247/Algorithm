#include <iostream>
#include <stack>
#include <string>

using namespace std;

int findLongestValidParentheses(string s) {
    int maxLength = 0;
    stack<int> st;
    st.push(-1);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            st.pop();
            if (st.empty()) {
                st.push(i);
            } else {
                maxLength = max(maxLength, i - st.top());
            }
        }
    }

    return maxLength;
}

int main() {
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;

        int maxLength = findLongestValidParentheses(S);
        cout << maxLength << endl;
    }

    return 0;
}
//https://oj.luyencode.net/problem/PTIT027
