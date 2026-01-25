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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll x=a*d;
        ll y=b*c;
        if(x==y)cout<<0<<endl;
        else if(a==0||c==0)cout<<1<<endl;
        else if(x%y==0||y%x==0)cout<<1<<endl;
        else cout<<2<<endl;
    }
}

int main()
{
    solve();
}
