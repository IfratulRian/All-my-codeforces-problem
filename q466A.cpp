#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
int main()
{
    optimize();
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    ll ans=(n/m)*min(b,m*a)+min((n%m)*a,b);
    cout<<ans<<endl;
    return 0;
}