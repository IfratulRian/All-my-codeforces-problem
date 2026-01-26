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
    string s="codeforces";
    while(n--){
        char str;
        cin>>str;
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==str){
                c=1;
                break;
            }
        }
        if(c==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
