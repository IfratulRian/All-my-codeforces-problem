#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
int main(){
    optimize();
    int n;
    cin>>n;
    string pi="314159265358979323846264338327";
    string str;
    while(n--){
        cin>>str;
        int count=0;
        for(int i=0;i<str.size();i++){
        if(pi[i]!=str[i])break;
        else if(pi[i]==str[i])count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
