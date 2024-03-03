#include <iostream>
using namespace std;

int main() {
    int iterations;
    cin >> iterations;

    for (int i = 0; i < iterations; i++) {
        int n, k;
        cin >> n >> k;

        cout << ((n - 2) / k + 2) << endl;
    }

    return 0;
}
