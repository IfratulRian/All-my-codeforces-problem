#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        int k,c=0;
        cin>>k;
        for(int i=1;;i++){
            if(i%3&&i%10!=3){
                if(++c==k){
                    cout<<i<<"\n";
                    break;
                }
            }
        }
    }
}
