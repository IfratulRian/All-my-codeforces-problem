#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back

int main(){
    optimize();
    int a;
    cin>>a;
    int m,n;
    int diff,sum;
    while(a--){
        cin>>m>>n;
        if(m<n){
            sum=n-m;
            if(sum%2==1)cout<<1<<endl;
            else cout<<2<<endl;
        }
        else if(m==n)cout<<0<<endl;
        else if(m>n){
            diff=m-n;
            if(diff%2==0)cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
    return 0;
}
