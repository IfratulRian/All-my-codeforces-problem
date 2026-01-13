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
    int a,x;
    while(n--){
        cin>>a>>x;
        int arr[a];
        int sum=0;
        for(int i=0;i<a;i++)cin>>arr[i];
        for(int i=0;i<x;i++){
            sum+=arr[i];
        }
    if(sum%2!=0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}
