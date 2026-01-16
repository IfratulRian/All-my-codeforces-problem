#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
void solve(){
    sarah();
    int m;
    cin>>m;
    while(m--){
        vector<string>s(8);
        for(int i=0;i<8;i++)cin>>s[i];
        int r=0;
        for(int i=0;i<8;i++){
            int ok=1;
            for(int j=0;j<8;j++){
                if(s[i][j]!='R'){
                    ok=0;
                    break;
                }
            }
            if(ok==1){
                r=1;
                break;
            }
        }
        if(r==1)cout<<'R'<<endl;
        else cout<<'B'<<endl;
    }
}
int main(){
    solve();
    return 0;
}
