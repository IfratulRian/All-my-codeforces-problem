#include<bits/stdc++.h>
using namespace std;

#define haras() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define endl '\n'
#define aa(v) v.begin(),v.end()
#define ss(v) v.rbegin(),v.rend()
#define ll long long
void file()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

void solve()
{
    //suiiii
}
int main()
{
    haras();
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &u:v){
        cin>>u;
    }
    reverse(aa(v));
    for(auto u:v)cout<<u<<" ";
}

