#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int n; cin >> n;

    vector<int> ranked(n);
    map<int, int> mp;
    int temp; cin >> temp;
    int rank = 1;
    mp[temp] = rank;
    ranked[0] = temp;
    for (int i = 1; i < n; i++) {
        cin >> ranked[i];
        if (temp != ranked[i]) {
            rank++;
            temp = ranked[i];
            mp[temp] = rank;
        }
    }
    int m; cin >> m;
    vector<int> player(m);
    int j = n - 1;
    for (int i = 0; i < m; i++) {
        cin >> player[i];
        while (j >= 0) {
            if (player[i] < ranked[j]) {
                cout << mp[ranked[j]] + 1 << "\n";
                break;
            } else if (player[i] == ranked[j]) {
                cout << mp[ranked[j]] << "\n";
                break;
            }
            j--;
        }
        if (j < 0) cout << 1 << "\n";
    }

    return 0;
}