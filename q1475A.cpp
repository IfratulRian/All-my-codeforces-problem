#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ll long long
#define endl '\n'
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

int OddDiv(ll a){
    while(a%2==0){
        a/=2;
    }
    if(a>1)return 1;
    else return 0;
}

void solve(){
    sarah();
    int t;
    cin>>t;
    while(t--){
        ll a;
        cin>>a;
        if(OddDiv(a))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main()
{
    solve();
}
