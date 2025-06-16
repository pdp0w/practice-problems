#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr double long ESP = 1e-9;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << setprecision(12) << fixed;

    // your code

    string s;
    cin >> s;

    int cur_len = 1;
    int longest_len = 1;

    for(int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            cur_len++;
        } else {
            longest_len = max(longest_len, cur_len);
            cur_len = 1;
        }
    }

    longest_len = max(longest_len, cur_len);

    cout << longest_len << endl;

    return 0;
}
