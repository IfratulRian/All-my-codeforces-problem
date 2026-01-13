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
    int sum=0;
    char c='a';
    for(int i=0;i<str.size();i++){
        int diff=abs(str[i]-c);
        sum+=min(diff,26-diff);
        c=str[i];
    }
    cout<<sum<<endl;
    return 0;
}
