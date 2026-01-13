#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
int main(){
    sarah();
    string str;
    cin>>str;
    bool ok=true;
    for(int i=1;i<str.size();i++){
        if(islower(str[i])){
            ok=false;
            break;
        }
    }
    if(ok){
        for(int i=0;i<str.size();i++){
            if(islower(str[i]))str[i]=toupper(str[i]);
            else str[i]=tolower(str[i]);
        }
    }
    cout<<str<<endl;
    return 0;
}
