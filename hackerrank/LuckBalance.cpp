#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> arr;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        if (y == 1) arr.push_back(x);
        ans += x;
    }

    if (k < arr.size()) {
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size() - k; i++) {
           ans -= (arr[i] * 2);
        }
    }
    cout << ans << "\n";
    return 0;
}