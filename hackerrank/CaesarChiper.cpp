#include <bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    string s;
    cin >> n >> s >> k;

    for (auto c : s) {
        if (c >= 'a' && c <= 'z') {
            c = (c + k - 'a') % 26 + 'a';
        } else if (c >= 'A' && c <= 'Z') {
            c = (c + k - 'A') % 26 + 'A';
        }
        cout << c;
    }


    return 0;
}