#include <iostream>
#include <queue>

using namespace std;

long long int rocketDistance(long long int x, long long int y) {
    return x * x + y * y;
}

int main() {
    int q, k, x, y, type;
    cin >> q >> k;
    priority_queue<long long int> pq;
    
    for (long long int i = 0; i < q; i++) {
        cin >> type;
        if (type == 1) {
            cin >> x >> y;
            if (pq.size() == k) {
                if (rocketDistance(x, y) < pq.top()) {
                    pq.pop();
                    pq.push(rocketDistance(x, y));
                }
            } else {
                pq.push(rocketDistance(x, y));
            }
        } else {
            cout << pq.top() << endl;
        }
    }

    return 0;
} 