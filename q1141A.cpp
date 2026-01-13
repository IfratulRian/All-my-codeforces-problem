#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back

int main(){
    optimize();
    ll n,m;
    cin>>n>>m;
    if(m<n||m%n!=0){
        cout<<-1<<endl;
        return 0;
    }
    ll x=m/n;
    int cnt=0;
    while(x%2==0){
        x/=2;
        cnt++;
    }
    while(x%3==0){
        x/=3;
        cnt++;
    }
    if(x==1)cout<<cnt<<endl;
    else cout<<-1<<endl;
    return 0;
}
