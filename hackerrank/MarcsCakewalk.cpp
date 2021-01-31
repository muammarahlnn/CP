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
    sort(arr.rbegin(), arr.rend());

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (pow(2, i) * arr[i]);
    }
    cout << ans << "\n";
}