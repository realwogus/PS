#include <iostream>
#include <vector>
using namespace std;

typedef struct {
    int necessaryDate;
    int profit;
} Date;

vector<Date> v;
int n;

int smallv (int main) {
    int ans = 0;
    for (int i = main; i < main + v[main].necessaryDate; i++) {
        int temp = smallv(i);
    }
}



int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        v.push_back({tmp1, tmp2});
    }

    int start = 0;
    while (v[start].necessaryDate > n) {
        start++;
    }
    // start는 가능한 최소의 시작 node로 할당
    
    int max = 0;
    for (int i = start; i < i + v[i].necessaryDate; i++) {
        if (v[i].necessaryDate + i > n) {
            continue;
        }
        int temp = smallv(i);
        if (max < temp) {
            max = temp;
        }
    }

    cout << max;
    return 0;
}