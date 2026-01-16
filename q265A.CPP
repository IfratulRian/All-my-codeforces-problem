#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
void solve(){
    sarah();
    string s1,s2;
    cin>>s1>>s2;
    int count=1;
    for(int i=0,j=0;i<s2.size();i++){
        if(s1[j]==s2[i]){
            count++;
            j++;
        }
    }
    cout<<count<<endl;
}
int main(){
    solve();
    return 0;
}
