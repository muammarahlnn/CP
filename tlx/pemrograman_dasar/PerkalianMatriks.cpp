#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, p;
    cin >> n >> m >> p;

    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    vector<vector<int>> b(m, vector<int>(p));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cin >> b[i][j];
        }
    }

    vector<vector<int>> ans(n, vector<int>(p));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            int temp = 0;
            for (int k = 0; k < m; k++) {
                temp += a[i][k] * b[k][j]; 
            }
            ans[i][j] = temp;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}