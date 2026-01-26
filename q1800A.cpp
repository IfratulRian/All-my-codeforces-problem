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
        int n;
        cin>>n;
        string s;
        cin>>s;

        for(int i=0;i<s.size();i++) s[i]=tolower(s[i]);
        int i=0;
        if(i<n && s[i]=='m'){
            while(i<n && s[i]=='m') i++;
            if(i<n && s[i]=='e'){
                while(i<n && s[i]=='e') i++;
                if(i<n && s[i]=='o'){
                    while(i<n && s[i]=='o') i++;
                    if(i<n && s[i]=='w'){
                        while(i<n && s[i]=='w') i++;
                        if(i==n){
                            cout<<"YES"<<endl;
                            continue;
                        }
                    }
                }
            }
        }
        cout<<"NO"<<endl;
    }
}

int main(){
    solve();
    return 0;
}
