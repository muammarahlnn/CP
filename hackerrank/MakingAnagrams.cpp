#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;

    vector<int> alfa(26);
    for (auto c: s1) alfa[c-'a']++;
    for (auto c: s2) alfa[c-'a']--;

    int ans = 0;
    for (auto i : alfa) {
        if (i != 0) ans += abs(i);
    }
    cout << ans << "\n";

    return 0;
}