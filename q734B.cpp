#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
int main(){
    sarah();
    ll a2,a3,a5,a6;
    cin>>a2>>a3>>a5>>a6;
    ll m256=min({a2,a5,a6});
    a2-=m256;
    ll m32=min(a2,a3);
    cout<<m256*256+m32*32<<endl;
    return 0;
}
