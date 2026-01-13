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
    if(a%2==1){
        cout<<-1<<endl;
        return 0;
    }
    for(int i=1;i<=a;i++){
        if(i%2==1){
            int k=i;
            cout<<k+1<<' ';
        }
        else{
            int k=i;
            cout<<k-1<<' ';
        }
    }
    cout<<endl;
    return 0;
}
