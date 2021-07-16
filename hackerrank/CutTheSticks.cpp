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

    while (true) {
        int mn = 1000;
        for (auto i : arr) {
            if (i > 0) mn = min(mn, i);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                arr[i] -= mn;
                ans++;
            }
        }
        if (ans == 0) break;
        cout << ans << "\n";
    }

    return 0;
}