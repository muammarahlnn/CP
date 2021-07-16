#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int ratings[2][3];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> ratings[i][j];
        }
    }

    int ans[2] = {};
    for (int i = 0; i < 3; i++) {
        if (ratings[0][i] > ratings[1][i]) ans[0]++;
        else if (ratings[0][i] < ratings[1][i]) ans[1]++;
    }

    cout << ans[0] << " " << ans[1] << "\n";

    return 0;
}