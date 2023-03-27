#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
    string n;
    int k;
    cin >> n >> k;

    stack<char> st;
    int count = 0;
    for (char c : n) {
        while (!st.empty() && count < k && st.top() < c) {
            st.pop();
            count++;
        }
        st.push(c);
    }
    while (count < k) {
        st.pop();
        count++;
    }

    string ans;
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());

    cout << ans << endl;

    return 0;
}
