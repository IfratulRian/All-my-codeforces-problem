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
    int t;
    cin>>t;
    while(t--){
        vector<string> a(8);
        for(int i=0;i<8;i++) cin>>a[i];
        for(int i=1;i<7;i++){
            for(int j=1;j<7;j++){
                if(a[i][j]=='#' &&
                   a[i-1][j-1]=='#' &&
                   a[i-1][j+1]=='#' &&
                   a[i+1][j-1]=='#' &&
                   a[i+1][j+1]=='#'){
                    cout<<i+1<<" "<<j+1<<'\n';
                }
            }
        }
    }
    return 0;
}