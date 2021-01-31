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
    int d, m; cin >> d >> m;

    int ans = 0;
    for (int i = 0; i <= n - m; i++) {
        int temp = 0;
        for (int j = i; j < i + m; j++) {
            temp += arr[j];
        }
        if (temp == d) ans++;
    }
    cout << ans << "\n";


    return 0;
}