#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back

int main(){
    optimize();
    int n,m;
    cin>>n>>m;
    if(n<m){
        cout<<-1<<endl;
        return 0;
    }
    int div=n/2;
    int k=div/m;
    k++;
    cout<<k*m<<endl;
    return 0;
}
