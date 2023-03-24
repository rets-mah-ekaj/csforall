#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q, i, j, temp = 0;
    cin >> n;
    vector <int> v(n), sum(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        temp += v[i];
        sum[i] = temp;
    }
    cin >> q;
    while (q--) {
        cin >> i >> j;
        if (i == 0)
            cout << sum[j] << '\n';
        else if (i == j)
            cout << v[i] << '\n';
        else
            cout << sum[j] - sum[i] + v[i] << '\n';
    }
    return 0;
}