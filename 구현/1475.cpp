#include <iostream>
using namespace std;

int main() {
    int arr[9] = {0};
    int n;
    cin >> n;
    
    while (n != 0) {
        if (n % 10 == 6 || n % 10 == 9) {
            arr[6]++;
        } else {
            arr[n % 10]++;
        }

        n /= 10;
    }

    if (arr[6] % 2 == 0) {
        arr[6] /= 2;
    } else {
        arr[6] = arr[6] / 2 + 1;
    }

    int max = 0;
    for (int i = 0; i < 9; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}