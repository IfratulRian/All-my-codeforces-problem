#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
int main(){
    sarah();
    int n;
    cin>>n;
    while(n--){
        string a,b;
        cin>>a>>b;
        int pos[26];
        for(int i=0;i<26;i++)pos[a[i]-'a']=i;
        int ans=0;
        for(int i=1;i<b.size();i++){
            ans+=abs(pos[b[i]-'a']-pos[b[i-1]-'a']);
        }
        cout<<ans<<endl;
    }
    return 0;
}
