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
    int m,n;
    char c;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>c;
            if(c!='B'&&c!='G'&&c!='W'){
                cout<<"#Color"<<endl;
                return 0;
            }
        }
    }
    cout<<"#Black&White"<<endl;
    return 0;
}