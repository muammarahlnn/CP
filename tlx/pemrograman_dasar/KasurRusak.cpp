#include <bits/stdc++.h>
using namespace std;

string solve(string s, int i) {
    if (i == s.size() / 2) {
        return "YA";
    } else {
        if (s[i] != s[s.size() - 1 - i]) return "BUKAN";
        else return solve(s, i+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    cout << solve(s, 0) << "\n";

    return 0;
}