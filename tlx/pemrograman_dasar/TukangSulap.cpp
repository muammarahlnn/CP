#include <bits/stdc++.h>
using namespace std;

struct Pindah {
    pair<string, int> pair1, pair2;
};

void pindahBola(vector<vector<int>> &baris, vector<Pindah> pindahan, int t) {
    for (int i = 0; i < t; i++) {
        int p = pindahan[i].pair1.first == "A" ? 0 : 1;
        int x = --pindahan[i].pair1.second;
        int q = pindahan[i].pair2.first == "A" ? 0 : 1;
        int y = --pindahan[i].pair2.second;

        int temp = baris[p][x];
        baris[p][x] = baris[q][y];
        baris[q][y] = temp;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<vector<int>> baris(2, vector<int>(n));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cin >> baris[i][j];
        }
    }
    
    int t; cin >> t;
    vector<Pindah> pindahan(t);
    for (int i = 0; i < t; i++) {
        Pindah pindah;
        cin >> pindah.pair1.first >> pindah.pair1.second
            >> pindah.pair2.first >> pindah.pair2.second;
        pindahan[i] = pindah;
    }

    pindahBola(baris, pindahan, t);
    for (auto i: baris) {
        for (auto j: i) {
            cout << j << " " ;
        }
        cout << "\n";
    }

    return 0;
}