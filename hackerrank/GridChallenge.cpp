#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<string> arr(n);
        for (int i = 0; i < n; i++) {
            string s; cin >> s;
            sort(s.begin(), s.end());
            arr[i] = s;
        }

        bool flag = false;
        for (int i = 0; i < arr[0].size(); i++) {
            for (int j = 0; j < n - 1; j++) {
                if (arr[j][i] > arr[j+1][i]) {
                    cout << "NO\n";
                    flag = true;
                    break;
                }
            }
            if (flag) break;
        }
        if (flag) continue;
        
        cout << "YES\n";
    }

    return 0;
}