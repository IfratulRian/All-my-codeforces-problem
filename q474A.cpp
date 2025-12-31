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
    char dir;
    string s;
    cin>>dir>>s;
    string kb="qwertyuiopasdfghjkl;zxcvbnm,./";
    for(auto c:s){
        int id=kb.find(c);
        if(dir=='R')cout<<kb[id-1];
        else cout<<kb[id+1];
    }
    return 0;
}