#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
void solve(){
    sarah();
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int last=0;
    int mx=0;
    for(int i=0;i<n;i++){
        int t=(arr[i]+m-1)/m;
        if(t>=mx){
            mx=t;
            last=i;
        }
    }
    cout<<last+1<<endl;
}
int main(){
    solve();
    return 0;
}
