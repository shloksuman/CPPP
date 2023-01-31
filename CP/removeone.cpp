#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N, L, S;
        cin >> N >> L >> S;
        long long min_sum = L * (L + 1) / 2;
        long long max_sum = L * N - min_sum + L;
        if (S < min_sum || S > max_sum) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
