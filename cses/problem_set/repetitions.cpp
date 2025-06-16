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

    map<char, int> temp;
    for (int i = 0; i < s.length(); i++) {
        temp[s[i]]++;
    }

    int rep = 1;
    for (auto x : temp) {
        rep = max(x.second, rep);
    }

    cout << rep << endl;
    

    return 0;
}
