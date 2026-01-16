#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
void solve(){
    sarah();
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int l=-1,r=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                if(l==-1)l=i;
                r=i;
            }
        }
        int cnt=0;
        if(l!=-1){
            for(int i=l;i<=r;i++){
                if(s[i]=='0')cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}

int main(){
    solve();
    return 0;
}
