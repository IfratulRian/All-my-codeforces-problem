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
    while(n--){
        int a;
        cin>>a;
        string s;
        cin>>s;
        int max=0;
        int k;
        for(int i=0;i<s.size();i++){
            k=s[i]-'a'+1;
            if(k>max)max=k;
        }
        cout<<max<<endl;
    }
    return 0;
}
