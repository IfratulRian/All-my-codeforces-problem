#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
int main()
{
    optimize();
    int a,b,n;
    cin>>a>>b>>n;
    while(1){
        int x=__gcd(a,n);
        if(n<x){
            cout<<1<<endl;
            break;
        }
        n-=x;
        int y=__gcd(b,n);
        if(n<y){
            cout<<0<<endl;
            break;
        }
        n-=y;
    }
    return 0;
}
