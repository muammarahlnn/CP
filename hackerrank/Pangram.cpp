#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; getline(cin, s);
    vector<int> alfa(26);
    for (auto c: s) {
        if (c >= 'a' && c <= 'z')
            alfa[c-'a']++;
        else if (c >= 'A' && c <= 'Z')
            alfa[c-'A']++;
    }

    for (auto i : alfa) {
        if (i == 0) {
            cout << "not pangram\n";
            return 0;
        }
    }
    cout << "pangram\n";

    return 0;
}