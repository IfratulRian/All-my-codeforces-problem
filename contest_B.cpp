#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        for (int i = 1; i <= n; i += 2) {
            if (i + 1 <= n) cout << i+1 << " " << i << " ";
            else cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}