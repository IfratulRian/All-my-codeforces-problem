#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
int main(){
    sarah();
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        int c=0;
        for(int i=0,j=s.size()/2;i<s.size()/2,j<s.size();i++,j++){
            if(s[i]==s[j])c++;
        }
        if(c==s.size()/2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
