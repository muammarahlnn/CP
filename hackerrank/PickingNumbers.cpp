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
    
    int ans = 2, maxx = 1, x = arr[0];
    bool flag = false;
    for (int i = 1; i < n; i++) {
        int temp = abs(x - arr[i]);
        if (temp <= 1) {
            maxx++;
            flag = true;
        } else {
            x = arr[i];
            if (flag) {
                ans = max(ans, maxx);
                maxx = 1;
            }
        }
    }
    ans = max(ans, maxx);
    cout << ans << "\n";

    return 0;
}