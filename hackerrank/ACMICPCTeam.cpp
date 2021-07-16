#include<bits/stdc++.h>
using namespace std;

int topicsKnown(string one, string two) {
    int ans = 0;
    for (int i = 0; i < one.length(); i++) {
        if (one[i] == '1' || two[i] == '1')
            ans++;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<string> arr;
    for (int i = 0; i < n; i++) {
        string x; cin >> x;
        arr.push_back(x);
    }

    int mx = 0;
    vector<int> knowns;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = topicsKnown(arr[i], arr[j]);
            knowns.push_back(temp);
            if (temp > mx) mx = temp;
        }
    }

    int teams = 0;
    for (auto i : knowns) {
        if (i == mx) teams++;
    }

    cout << mx << "\n" << teams << "\n";

}
