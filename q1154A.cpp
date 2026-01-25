#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ll long long
#define endl '\n'
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    sarah();
    vector<int>x(4);
    for(int i=0;i<4;i++)cin>>x[i];
    sort(all(x));
    int a=x[3]-x[2];
    int b=x[3]-x[1];
    int c=x[3]-x[0];
    cout<<a<<' '<<b<<' '<<c<<endl;
}

int main()
{
    solve();
}
