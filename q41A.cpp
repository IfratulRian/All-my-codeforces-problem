#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back

int main()
{
    sarah();
    string s,t;
    cin>>s>>t;
    reverse(all(s));
    cout<<(s==t?"YES":"NO");
    return 0;
}