#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main(){
    optimize();
    int k,r;
    cin>>k>>r;
    for(int x=1;x<=10;x++){
        int cost = k*x;
        if(cost%10==r || cost%10==0){
            cout<<x<<endl;
            break;
        }
    }
    return 0;
}
