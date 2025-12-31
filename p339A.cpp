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
    string s;
    cin>>s;
    vector<char>v;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+'){
            v.pb(s[i]);
        }
    }
    sort(all(v));
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(i!=v.size()-1)
        cout<<'+';
    }
    cout<<endl;
    return 0;
}