#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n; cin >> n;
    int angka = 0;
    for (int i = 0, baris = 1; i < n; i++, baris++) {
        for (int j = 0; j < baris; j++) {
            cout << angka++;
            if (angka > 9) angka = 0;
        }
        cout << "\n";
    }
    

    return 0;
}