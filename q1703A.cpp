#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
int main(){
    sarah();
    int n;
    cin>>n;
    string yes="yes";
    while(n--){
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++){
            str[i]=tolower(str[i]);
        }
        if(str==yes)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
