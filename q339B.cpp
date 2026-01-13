#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    cin >> n >> m;

    long long c = 1, ans = 0;
    for(int i = 0; i < m; i++){
        long long x;
        cin >> x;
        ans += (x - c + n) % n;
        c = x;
    }

    cout << ans << '\n';
}
