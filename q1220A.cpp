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
    string s;
    cin>>s;
    int z=count(all(s),'z');
    int e=count(all(s),'e');
    int r=count(all(s),'r');
    int o=count(all(s),'o');
    int n=count(all(s),'n');
    int one=min(o,min(n,e));
    o-=one;
    n-=one;
    e-=one;
    int zero=min(z,min(r,min(o,e)));
    for(int i=0;i<one;i++)cout<<1<<' ';
    for(int i=0;i<zero;i++)cout<<0<<' ';
    cout<<endl;
}
int main(){
    solve();
    return 0;
}
