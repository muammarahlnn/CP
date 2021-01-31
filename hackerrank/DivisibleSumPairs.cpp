#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n, k; cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // cout << arr[i] << " " << arr[j] << " " << arr[i] + arr[j] <<  "\n";
            if ((arr[i] + arr[j]) % k == 0) ans++;
        }
    }
    cout << ans << "\n";

    return 0;
}