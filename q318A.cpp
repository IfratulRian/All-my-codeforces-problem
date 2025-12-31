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
    int a,b;
    cin>>a>>b;
    vector<int>v;
    for(int i=1;i<=a;i++){
        if(i%2==1){
            v.pb(i);
        }
    }
    for(int i=1;i<=a;i++){
        if(i%2==0){
            v.pb(i);
        }
    }
    cout<<v[b-1]<<endl;
    return 0;
}