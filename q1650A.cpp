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
        char c;
        cin>>s>>c;
        int f=0;
        for(int i=0;i<s.size();i+=2){
            if(s[i]==c){
                f=1;
                break;
            }
        }
        cout<<(f==1?"YES":"NO")<<endl;
    }

}

int main(){
    solve();
    return 0;
}
