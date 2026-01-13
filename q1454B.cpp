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
    while(a--){
        int n;
        cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        int mn=INT_MAX;
        for(auto it:mp){
            if(it.second==1){
                mn=it.first;
                break;
            }
        }
        if(mn==INT_MAX){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            if(v[i]==mn){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
