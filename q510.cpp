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
    char hash='#';
    char dot='.';
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i%2==0&&j!=n&&i%4!=0)cout<<dot;
            else if(i%2==0&&j!=1&&i%4==0)cout<<dot;
            else cout<<hash;
        }
        cout<<endl;
    }
    return 0;
}
