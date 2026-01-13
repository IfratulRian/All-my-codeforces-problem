#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0,d=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A')a++;
        else d++;
    }
    if(a>d)cout<<"Anton"<<endl;
    else if(d>a)cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
}
