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

    int pos = 0, ans = 0;
    while (pos < n-1) {
        if (arr[pos+2] == 0) {
            pos += 2;
            ans++;
        } else {
            pos++;
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}