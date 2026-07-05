#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ll long long
#define endl '\n'
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define k 1000000
vector<ll> fib;

void fibonacci(){
    fib.pb(1);
    fib.pb(1);
    while(fib.back()<=k){
        int n=fib.size();
        fib.pb(fib[n-1]+fib[n-2]);
    }
}

ll fibonet(int n){
    ll count=0;
    int j=0;
    for(ll i=1;;i++){
        if(j<fib.size()&&i==fib[j]){
            while(j<fib.size()&&fib[j]==i) j++;
        }
        else{
            count++;
            if(count==n) return i;
        }
    }
}

void solve(){
    sarah();
    fibonacci();
    int a;
    cin>>a;
    cout<<fibonet(a)<<endl;
}

int main()
{
    solve();
}
