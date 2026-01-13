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
        int n,m;
        cin>>n>>m;
        vector<string>s(n);
        for(int i=0;i<n;i++)cin>>s[i];
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int diff=0;
                for(int k=0;k<m;k++){
                    diff+=abs(s[i][k]-s[j][k]);
                }
                ans=min(ans,diff);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
