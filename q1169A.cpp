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
    while(n--){
        int n ;
        cin>>n;
        string s;
        cin>>s;
        int f=0;
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                cout<<i+1<<' '<<i+2<<endl;
                f=1;
                break;
            }
        }
        if(!f)cout<<-1<<' '<<-1<<endl;
    }
    return 0;
}
