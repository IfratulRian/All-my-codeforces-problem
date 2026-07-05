#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);

void solve() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        long long mn = LLONG_MAX;
        for(int i=0;i<n;i++){
            cin >> a[i];
            mn = min(mn, a[i]);
        }

        bool ok = true;
        for(int i=0;i<n;i++){
            if(a[i] != mn && a[i] % mn != 0){
                ok = false;
                break;
            }
        }

        cout << (ok ? "Yes" : "No") << "\n";
    }
}

int main(){
    optimize();
    solve();
    return 0;
}
