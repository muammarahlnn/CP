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

    int ans = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        int temp = abs(arr[i] - arr[i+1]);
        ans = min(ans, temp);
    }
    cout << ans << "\n";
}