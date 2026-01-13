#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
int main(){
    sarah();
    int a,b;
    cin>>a>>b;
    string s[b][2];
    for(int i=0;i<b;i++){
            cin>>s[i][0]>>s[i][1];
    }
    string k[a];
    for(int i=0;i<a;i++){
        cin>>k[i];
    }
    string x="";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(s[j][0]==k[i]){
                if(s[j][0].size()>s[j][1].size())cout<<s[j][1];
                else cout<<s[j][0];
                break;
            }
        }
        if(i!=a-1)cout<<' ';
    }
    cout<<endl;
    return 0;
}
