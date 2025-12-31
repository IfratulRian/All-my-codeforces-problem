#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back

int main()
{
    sarah();
    int b;
    cin>>b;
    while(b--){
        int f=0;
        ll a;
        cin>>a;
        if(a<=2){
            cout<<"NO"<<endl;
            continue;
        }
        for(ll i=3;i*i<=a;i++){
            if(a%i==0){
                f=1;
                break;
            }
        }
        if(f==0&&a%2!=0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
