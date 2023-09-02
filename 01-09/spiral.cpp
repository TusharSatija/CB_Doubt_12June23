#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[100][100];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = m - 1;
    
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            cout << arr[top][i]<<", ";
        }
        top++;
        
        for (int j = top; j <= bottom; j++) {
            cout << arr[j][right]<< ", ";
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << arr[bottom][i]<< ", ";
            }
            bottom--;
        }

        if (left <= right) {
            for (int j = bottom; j >= top; j--) {
                cout << arr[j][left] << ", ";
            }
            left++;
        }
    }
    
    cout << "END";
    return 0;
}
