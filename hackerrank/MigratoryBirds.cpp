#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n; cin >> n;
    vector<int> types(6);
    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        types[temp]++;
    }
    int ans = 1, max = types[1];
    for (int i = types.size() - 1; i > 1; i--) {
        if (types[i] >= max) {
            max = types[i];
            ans = i;
        }
    }
    cout << ans << "\n";

    return 0;
}