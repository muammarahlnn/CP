#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    string s; cin >> s;
    int n = s.size();
    if (s.substr(n-2, n) == "AM") {
        string hour = to_string(stoi(s.substr(0, 3)));
        if (hour.size() == 1) hour = "0" + hour;
        if (hour == "12") hour = "00";
        s = hour + s.substr(2, n - 4);
    } else {
        string hour = to_string(stoi(s.substr(0, 3)) + 12);
        if (hour == "24") hour = "12";
        s = hour + s.substr(2, n - 4);
    }
    cout << s << "\n";

    return 0;
}