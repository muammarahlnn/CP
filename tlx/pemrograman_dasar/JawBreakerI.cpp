#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    for (auto i : arr) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << "\n";
    }
    
    int b, k;
    cin >> b >> k;

    

    return 0;
}