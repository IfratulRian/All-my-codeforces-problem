#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int isprime(int n){
    if(n<2)return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return 0;
    }
    return 1;
}

void solve(){
    optimize();
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int count=0;
        for(int i=2;i<=200000;i++){
            if(isprime(i)){
                count++;
                if(count==a){
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
}

int main()
{
    solve();
}