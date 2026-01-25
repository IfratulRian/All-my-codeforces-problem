#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
int distinct(int x){
    vector<int>arr;
    int freq[10]={0};
    while(x>0){
        int digit=x%10;
        arr.pb(digit);
        x/=10;
    }
    int count=0;
    sort(all(arr));
    arr.erase(unique(all(arr)),arr.end());
    if(arr.size()==4)return 1;
    else return 0;
}

void solve(){
    sarah();
    int t;
    cin>>t;
    int f;
    t++;
    for(int i=0;;i++){
        f=distinct(t);
        if(f==1)break;
        t++;
    }cout<<t<<endl;
}
int main(){
    solve();
    return 0;
}
