#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ll long long
#define endl '\n'
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

int prime(int a){
    if(a<2)return 0;
    for(int i=2;i*i<=a;i++){
        if(a%i==0)return 0;
    }
    return 1;
}

void solve(){
    sarah();
    int a;
    cin>>a;
    if(a%2==0)
    cout<<a-4<<' '<<4<<endl;
    else 
    cout<<9<<' '<<a-9<<endl;
}

int main()
{
    solve();
}
