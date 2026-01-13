#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
int main(){
    sarah();
    string g,h,p;
    cin>>g>>h>>p;
    int count[26]={0};
    for(char c:g)count[c-'A']++;
    for(char c:h)count[c-'A']++;
    for(char c:p)count[c-'A']--;
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
