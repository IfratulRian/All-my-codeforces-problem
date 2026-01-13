#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back

int main(){
    optimize();
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        sort(all(a));
        if(a[n-1]<=d)cout<<"YES"<<endl;
        else if(a[0]+a[1]<=d)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
