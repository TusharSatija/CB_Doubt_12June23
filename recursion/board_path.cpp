#include <iostream>
using namespace std;

int count = 0;

void solve(int n, int m, int sum, string str) {
    if (sum == n) {
        count++;
        cout << str << " ";
        return;
    }
    if (sum > n) return;

    for (int i = 1; i <= m; i++) {
        solve(n, m, sum + i, str + to_string(i));
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    solve(n, m, 0, "");
    cout << endl;
    cout << count << endl;

    return 0;
}
