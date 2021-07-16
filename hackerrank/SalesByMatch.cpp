#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i+1]) {
            ans++;
            i++;
        }
    }
    cout << ans << "\n";

    return 0;
}