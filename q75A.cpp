#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
long long f(long long x){
    string s=to_string(x),t="";
    for(char c:s) if(c!='0') t+=c;
    return stoll(t);
}
int main(){
    long long a,b;
    cin>>a>>b;
    cout<<(f(a)+f(b)==f(a+b)?"YES":"NO");
}
