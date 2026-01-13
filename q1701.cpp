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
        int cnt=0,x;
        for(int i=0;i<4;i++){
            cin>>x;
            cnt+=x;
        }
        if(cnt==0) cout<<0<<endl;
        else if(cnt==4) cout<<2<<endl;
        else cout<<1<<endl;
    }
    return 0;
}
