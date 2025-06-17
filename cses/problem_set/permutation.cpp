#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr double long ESP = 1e-9;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << setprecision(12) << fixed;

    // your code
    ll n;
    cin >> n;

    if(n < 4 && n != 1) {
        cout << "NO SOLUTION" << endl;
    } else {
        ll i = 1;
        ll j = 2;


        while(j <= n) {
            cout << j << " ";
            j += 2;
        }

        while(i <= n) {
            cout << i << " ";
            i += 2;
        }
    }

    return 0;
}
