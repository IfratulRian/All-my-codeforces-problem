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
        int a;
        cin>>a;
        string s;
        cin>>s;
        for(int i=0;i<a;i++){
            if(s[i]=='U')s[i]='D';
            else if(s[i]=='D')s[i]='U';
        }
        cout<<s<<endl;
    }
}
int main(){
    solve();
    return 0;
}
