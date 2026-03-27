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
        int a;
        cin>>a;
        if(a%3==0)cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
}

int main()
{
    solve();
}
