#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        if (s.length() % 2 == 1) {
            cout << -1 << "\n";
            continue;
        }

        vector<int> alfa1(26);
        vector<int> alfa2(26);
        for (int i = 0, j = s.length() - 1; i < s.length() / 2; i++, j--) {
            alfa1[s[i]-'a']++;
            alfa2[s[j]-'a']++;
        }

        int ans = 0;
        for (int i = 0; i < 26; i++) {
            if (alfa1[i] != alfa2[i]) ans += abs(alfa1[i] - alfa2[i]);
        }
        cout << ans / 2 << "\n";

    }

    return 0;
}