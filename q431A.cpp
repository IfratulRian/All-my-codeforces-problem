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
    int a[4];
    for(int i=0;i<4;i++)cin>>a[i];
    string s;
    cin>>s;
    int ans=0;
    for(auto c:s)ans+=a[c-'1'];
    cout<<ans<<endl;
    return 0;
}