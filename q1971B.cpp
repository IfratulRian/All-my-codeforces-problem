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
        int a;
        cin>>a;
        string s;
        cin>>s;
        set<string>st;
        for(int i=0;i<a-1;i++){
            st.insert(s.substr(i,2));
        }
        cout<<st.size()<<endl;
    }

}

int main(){
    solve();
    return 0;
}
