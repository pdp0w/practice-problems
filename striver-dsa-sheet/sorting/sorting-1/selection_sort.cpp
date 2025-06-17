#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr double long ESP = 1e-9;

vector<int> selection_sort(vector<int> &arr) {
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }

    return arr;
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << setprecision(12) << fixed;

    // your code
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = selection_sort(arr);

    for(auto x : result) {
        cout << x << " ";
    }

    cout << endl;
    

    return 0;
}
