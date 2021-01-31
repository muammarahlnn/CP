#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);

    string s;
    int k;
    cin >> s >> k;

    for (int i = 0; i < s.size(); i++) {
        s[i] = (s[i] + k - 'a') % 26 + 'a';
    }
    cout << s << "\n";
}