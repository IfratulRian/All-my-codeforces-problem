#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
int main(){
    optimize();
    int n;
    cin>>n;
    int ans=n;
    for(int i=1;i<n;i++){
        ans+=(ll)i*(n-i);
    }
    cout<<ans<<endl;
    return 0;
}
