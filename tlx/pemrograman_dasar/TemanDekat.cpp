#include <bits/stdc++.h>
using namespace std;

struct Student {
    pair<int, int> factor;
};



int closeFriends(Student a, Student b, int d) {
    int x = pow(abs(a.factor.first - b.factor.first), d);
    int y = pow(abs(a.factor.second - b.factor.second), d);
    return x + y;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, d;
    cin >> n >> d;
    vector<Student> students(n);
    for (int i = 0; i < n; i++) {
        Student student;
        cin >> student.factor.first >> student.factor.second;
        students[i] = student;
    }

    pair<int, int> closest = make_pair(INT_MAX, INT_MIN); // (min, max)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i+1; j < n; j++) {
            int temp = closeFriends(students[i], students[j], d);
            closest.first = min(closest.first, temp);
            closest.second = max(closest.second, temp);
        }
    }
    cout << closest.first << " " << closest.second << "\n";

    return 0;
}