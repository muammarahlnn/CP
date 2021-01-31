#include <bits/stdc++.h>
using namespace std;

int exponent(int &n, int i) {
    int ans = 0;
    while (n % i == 0) {
        n /= i;
        ans++;
    }
    return ans;
}

vector<int> primes;
void primeFactor(int n) {
    int i;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            int expo = exponent(n, i);

            if (expo != 1) {
                cout << i << "^" << expo;
            } else {
                cout << i;
            }

            if (n != 1) {
                cout << " x ";
            }
        }
    }
    if (n != 1) {
        cout << i;
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    primeFactor(n);

    return 0;
}