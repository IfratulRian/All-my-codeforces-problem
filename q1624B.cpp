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
    int a,b,c;
    while(n--){
        cin>>a>>b>>c;
        int diff1=abs(a-b);
        int diff2=abs(b-c);
        if(diff1==diff2){
            cout<<"YES"<<endl;
            continue;
        }
        if(diff1==0||diff2==0){
            cout<<"NO"<<endl;
            continue;
        }
        if(diff1>diff2&&diff2!=0){
            if(diff1%diff2==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(diff2>diff1&&diff1!=0){
            if(diff2%diff1==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
