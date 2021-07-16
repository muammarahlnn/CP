#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n, temp; cin >> n >> temp;
    int min = temp, max = temp;
    int breakMin = 0, breakMax = 0;
    for (int i = 1; i < n; i++) {
        int tmp; cin >> tmp;
        if (tmp > max) {
            breakMax++;
            max = tmp;
        }
        if (tmp < min) {
            breakMin++;
            min = tmp;
        }
    }
    cout << breakMax << " " << breakMin << "\n";

    return 0;
}