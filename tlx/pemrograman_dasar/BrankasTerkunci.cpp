#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> catat;
vector<bool> pernah;
void permutasi(int kedalaman) {
    if (kedalaman >= n) {
        for (int i = 0; i < n; i++) {
            cout << catat[i];
        }
        cout << "\n";
    } else {
        for (int i = catat[kedalaman-1]+1; i <= n; i++) {
            catat[kedalaman] = i;
            permutasi(kedalaman+1);
        }
    }

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    catat.resize(n);
    pernah.resize(n);

    permutasi(0);

    return 0;
}