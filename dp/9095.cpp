#include <iostream>
using namespace std;

int n;
int t;
int arr[11] = {0, };

int main() {
    cin >> t;
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;

    for (int i = 0; i < t; i++) {
        cin >> n;
        int answer = 0;
        while(n > 3) {
            answer += (n / 2 + 1);
            n -= 3;
        }
        answer += arr[n];
        cout << answer << '\n';
    }
    return 0;
}