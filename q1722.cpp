#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
int main()
{
    optimize();
    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        int ok=1;
        for(int i=0;i<n;i++){
            if(s[i]=='G')s[i]='B';
            if(t[i]=='G')t[i]='B';
            if(s[i]!=t[i]){
                ok=0;
                break;
            }
        }
        if(ok==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}