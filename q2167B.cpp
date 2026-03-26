#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
#define yes "YES"
#define no "NO"

void solve(){
    optimize();
    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int freq[26]={0};
        for(auto c:s1)freq[c-'a']++;
        for(auto c:s2)freq[c-'a']--;

        int ok=1;
        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                ok=0;
                break;
            }
        }
        cout<<(ok ? yes:no)<<endl;
    }
}

int main(){
    solve();
    return 0;
}
