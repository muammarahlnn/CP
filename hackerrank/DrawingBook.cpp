#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n, p; cin >> n >> p;

    int ans = 0;
    int kiri = 1, kanan = n;
    while (true) {
        if (ans == 0) {
            // cek depan buku
            if (p == kiri) break;
            kiri += 2;
            // cek belakang buku
            if (n % 2 == 0) {
                if (p == kanan) break;
                kanan -= 2;
            } else {
                if (p >= kanan - 1) break;
                kanan -= 3;
            }
        } else {
            // cek halaman
            if (p <= kiri) break;
            if (p >= kanan) break;

            kiri += 2;
            kanan -= 2;
        }
        ans++;
    }
    cout << ans << "\n";

    return 0;
}