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
    ll w,h,d;
    ll n;
    cin>>w>>h>>d>>n;
    vector<ll>divw,divh;
    for(ll i=1;i*i<=w;i++){
        if(w%i==0){
            divw.pb(i);
            if(i!=w/i)divw.pb(w/i);
        }
    }
    for(ll i=1;i*i<=h;i++){
        if(h%i==0){
            divh.pb(i);
            if(i!=h/i)divh.pb(h/i);
        }
    }
    for(ll i=0;i<divw.size();i++){
        for(ll j=0;j<divh.size();j++){
            ll ab=divw[i]*divh[j];
            if(ab>n||n%ab)continue;
            ll c=n/ab;
            if(d%c==0){
                cout<<divw[i]-1<<" "<<divh[j]-1<<" "<<c-1<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;
}

int main()
{
    solve();
}
