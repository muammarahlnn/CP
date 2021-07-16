#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    for (int i = n - 1; i > 1; i--) {
        if (arr[i-1] + arr[i-2] > arr[i]) {
            cout << arr[i-2] << " " << arr[i-1] << " " << arr[i] << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";

    return 0;
}