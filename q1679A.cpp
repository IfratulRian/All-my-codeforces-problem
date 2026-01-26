#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ll long long
#define endl '\n'
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    sarah();
    int t;
    cin>>t;
    while(t--){
        ll a;
        cin>>a;
        if(a%2!=0){
            cout<<-1<<endl;
            continue;
        }
        ll y=a/4;
        ll x=(a+5)/6;
        if(x>y)cout<<-1<<endl;
        else cout<<x<<' '<<y<<endl;
    }
}

int main(){
    solve();
}
