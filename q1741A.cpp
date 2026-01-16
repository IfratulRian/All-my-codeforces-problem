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
        string s1,s2;
        cin>>s1>>s2;
        char s1b=s1[s1.size()-1];
        char s2b=s2[s2.size()-1];
        if(s1b==s2b){
            if(s1.size()==s2.size())cout<<'='<<endl;
            else if(s1b=='S')
            cout<<(s1.size()>s2.size()?'<':'>')<<endl;
            else if(s1b=='L')
            cout<<(s1.size()>s2.size()?'>':'<')<<endl;
            else cout<<'+'<<endl;
        }
        else{
            if(s1b=='S'||(s1b=='M'&&s2b=='L'))
            cout<<'<'<<endl;
            else cout<<'>'<<endl;
        }
    }
}
int main(){
    solve();
    return 0;
}
