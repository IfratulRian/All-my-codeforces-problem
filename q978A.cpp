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
    int a;
    cin>>a;
    vector<int>v(a);
    for(int i=0;i<a;i++){
        cin>>v[i];
    }
    unordered_set<int>arr;
    vector<int>ans;
    for(int i=a-1;i>=0;i--){
        if(arr.find(v[i])==arr.end()){
            arr.insert(v[i]);
            ans.pb(v[i]);
        }
    }
    reverse(all(ans));
    cout<<ans.size()<<endl;
    for(int x:ans)cout<<x<<' ';
    cout<<endl;
    return 0;
}
