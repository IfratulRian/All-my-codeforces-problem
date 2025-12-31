#include <bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ll long long
#define endl '\n'

int main(){
    sarah();
    string line;
    getline(cin,line);
    stringstream ss(line);
    vector<int>v;
    map<int,int>freq;
    set<int>s;
    int n;
    while(ss>>n){
        freq[n]++;
        if(s.find(n)==s.end()){
            v.pb(n);
            s.insert(n);
        }
    }
    for(int u:v)
        cout<<u<<" "<<freq[u]<<endl;
    return 0;
}
