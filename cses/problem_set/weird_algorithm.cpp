#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr double long ESP = 1e-9;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << setprecision(12) << fixed;

    // your code
    
    long int n;
    cin >> n;

    cout << n << endl;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n *= 3;
            n++;
        }
        cout << n << " ";
    }


    return 0;
}
