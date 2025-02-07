#include <iostream>
#include <vector>
using namespace std;

bool Flat(vector<int> v, int s, int e, int max) {
    if (s < 0 || e >= max) {
        return false;
    }
    for (int i = s; i < e; i++) {
        if (v[i] != v[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int ans = 0;
    int n, l;
    cin >> n >> l;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int temp;
            cin >> temp;
            v[i].push_back(temp);
        }
    }
    
    // row
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = 0; j < n - 1; j++) {
            if (v[i][j] == v[i][j + 1]) {
                count++;
                continue;
            } else if (v[i][j] == v[i][j + 1] - 1) {
                if (Flat(v[i], j - l + 1, j, n)) {
                    count++;
                    continue;
                } else {
                    break;
                }
            } else if (v[i][j] == v[i][j + 1] + 1) {
                if (Flat(v[i], j, j + l - 1, n)) {
                    count++;
                    continue;
                } else {
                    break;
                }
            }
        }
        if (count == n) {
            ans++;
        }
    }

    // col
    for (int i = 0; i < n; i++) {
        int count = 1;
        vector<int> temp;
        for (int j = 0; j < n; j++) {
            temp.push_back(v[j][i]);
        }

        for (int j = 0; j < n - 1; j++) {
            if (temp[j] == temp[j + 1]) {
                count++;
                continue;
            } else if (temp[j] == temp[j + 1] - 1) {
                if (Flat(temp, j - l + 1, j, n)) {
                    count++;
                    continue;
                } else {
                    break;
                }
            } else if (temp[j] == temp[j + 1] + 1) {
                if (Flat(temp, j + 1, j + l, n)) {
                    count++;
                    continue;
                } else {
                    break;
                }
            }
        }

        if (count == n) {
            ans++;
        }
    }

    cout << ans;

    return 0;
}

/*

*/