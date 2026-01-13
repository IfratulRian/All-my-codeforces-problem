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
    int n,k;
    cin>>n>>k;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        int f,t;
        cin>>f>>t;
        if(t>k)ans=max(ans,f-(t-k));
        else ans=max(ans,f);
    }
    cout<<ans<<endl;
    return 0;
}
