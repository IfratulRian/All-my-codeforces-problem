#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);

void solve() {
    int t;
    cin >> t;
    while(t--){
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        string ans;
        ans+=s1[0];
        ans+=s2[0];
        ans+=s3[0];
        cout<<ans<<endl;
    }
}

int main(){
    optimize();
    solve();
    return 0;
}
