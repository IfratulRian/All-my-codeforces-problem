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
    while(m--){
        string s;
        cin>>s;
        int f=0;
        if(s.size()==1){
            f=0;
        }
        else if(s.size()==2){
            if(s[0]=='Y'&&s[1]=='e')f=1;
            else if(s[0]=='s'&&s[1]=='Y')f=1;
            else if(s[0]=='e'&&s[1]=='s')f=1;
        }
        else{
            for(int i=0;i<s.size()-2;i++){
            if(s[i]=='Y'&&s[i+1]=='e'&&s[i+2]=='s')f=1;
            else if(s[i]=='s'&&s[i+1]=='Y'&&s[i+2]=='e')f=1;
            else if(s[i]=='e'&&s[i+1]=='s'&&s[i+2]=='Y')f=1;
            }
        }
        if(f==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int main(){
    solve();
    return 0;
}
