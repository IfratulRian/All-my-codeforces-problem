#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(0);
using namespace std;

int main(){
    fast;

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=-1;
        for(int k=1;k<n;k++){

            int l=0,r=0;
            for(int i=0;i<k;i++){
                if(a[i]==2)l++;
            }
            for(int i=k;i<n;i++){
                if(a[i]==2)r++;
            }
            if(l==r){
                ans=k;
                break;
            }
        }
        cout<<ans<<"\n";
    }
}