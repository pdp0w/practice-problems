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

    // this was my bullshit approach
    // vector<ll> arr(n-1);
    // for (int i = 0; i < n - 1; i++) {
    //     cin >> arr[i];
    // }
    //
    //
    // sort(arr.begin(), arr.end());
    //
    // for (ll i = 1; i <= n; i++) {
    //     if (i != arr[i - 1]) {
    //         cout << i << endl;
    //         break;
    //     }
    // }    

    // this is chat gpt approach, I took help with

    ll total = n * (n + 1) / 2;
    ll sum = 0;

    for (int i = 0; i < n - 1; i++) {
        ll x;
        cin >> x;
        sum += x;
    }

    cout << total - sum << endl;

    return 0;
}
