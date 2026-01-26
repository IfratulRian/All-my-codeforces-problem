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
        ll a;
        cin>>a;
        vector<int>arr(a);
        for(int i=0;i<a;i++)cin>>arr[i];
        int count=0;
        int sum,mul;
        for(int i=0,j=0;i<a;j++){
            sum=(i+1)+(j+1);
            mul=arr[i]*arr[j];
            if(sum==mul)count++;
            if(j-1==a){
                i++;
                j=0;
            }
        }
        cout<<count<<endl;
    }
}

int main(){
    solve();
}
