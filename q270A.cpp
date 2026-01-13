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
    int a;
    while(n--){
        cin>>a;
        int k=360/(180-a);
        if((k*a)%180==0&&k>=3)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
