#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ll long long
#define endl '\n'
#define a(v) v.begin(),v.end
#define ra(v) v.rbegin(),v.rend()

int main()
{
    sarah();
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        vector<int> v1(a), v2(b);
        for(int i=0; i<a; i++) cin>>v1[i];
        for(int i=0; i<b; i++) cin>>v2[i];
        unordered_map<int,int> f1,f2;
        for(int x:v1) f1[x]++;
        for(int x:v2) f2[x]++;
        unordered_set<int> all;
        for(auto &p:f1) all.insert(p.first);
        for(auto &p:f2) all.insert(p.first);
        int count=0;
        for(int x:all) count+=abs(f1[x]-f2[x]);
        cout<<count<<endl;
    }
    return 0;
}
