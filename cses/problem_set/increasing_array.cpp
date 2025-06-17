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

    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    /*

    3 2 5 1 7

    3 (2 + 1) 5 (1 + 4) 7
    1 + 4 = 5
    
    */

    ll mx = -1;
    ll output = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] < mx) {
            output += mx - a[i];
        }

        mx=max(mx, a[i]);
    }

    cout << output << endl;

    return 0;
}
