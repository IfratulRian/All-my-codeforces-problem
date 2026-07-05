#include<bits/stdc++.h>
using namespace std;
#define ll long long

int cnt(int amm){
    int coins[5]={1,5,10,25};
    int i=3,count=0;
    while(amm){
        count+=amm/coins[i];
        amm=amm%coins[i];
        i--;
    }
    return count;
}

bool prime(int n){
    bool found=false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            found=true;
            break;
        }
    }
    if(!found)return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    if(prime(9))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}