#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
int main(){
    sarah();
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        set<ll>v;
        for(ll i=1;i*i<=n;i++){
            v.insert(i*i);
        }
        for(ll i=1;i*i*i<=n;i++){
            v.insert(i*i*i);
        }
        cout<<v.size()<<endl;
    }
    return 0;
}
