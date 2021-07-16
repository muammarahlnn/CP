#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); 

    string s; getline(cin , s);
    s.erase(remove(s.begin(), s.end(), ' '), s.end());

    int n = s.size();
    int l = floor(sqrt(n));
    int r = ceil(sqrt(n));
    if (l * r < n) l++;

    vector<vector<string>> arr(l, vector<string>(r));
    int idx = 0;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < r; j++) {
            arr[i][j] = s[idx++];
            if (idx >= n) break;
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < l; j++) {
            cout << arr[j][i];
        }
        cout << (i < r - 1 ? " " : "");
    }


    return 0;
}