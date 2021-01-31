#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> catat;
vector<bool> pernah;
void permutasi(int kedalaman) {
    if (kedalaman >= n) {
        for (int i = 0; i < n; i++) {
            cout << catat[i];
        }
        cout << "\n";
    } else {
        for (int i = 1; i <= n; i++) {
            if (!pernah[i]) {
                pernah[i] = true;
                catat[kedalaman] = i;
                permutasi(kedalaman+1);
                pernah[i] = false;
            }
        }
    }

}

void permutation(int n) {
    vector<int> arr;
    for (int i = 1; i <= n; i++) {
        arr.push_back(i);
    }

    do {
        for (auto i : arr) {
            cout << i << " ";
        }
        cout << "\n";
    } while (next_permutation(arr.begin(), arr.end()));
}
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    catat.resize(n);
    pernah.resize(n);

    permutasi(0);
    cout << "\n";
    permutation(n);

    return 0;
}