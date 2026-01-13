#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back

ll fact(int n){
    ll res=1;
    for(int i=1;i<=n;i++)res*=i;
    return res;
}
int main(){
    optimize();
    int a,b;
    cin>>a>>b;
    cout<<fact(min(a,b))<<endl;
    return 0;
}
