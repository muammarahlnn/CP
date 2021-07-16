#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= k) {
            k -= arr[i];
            ans++;
        } else {
            break;
        }
    }
    cout << ans << "\n";

    return 0;
}