#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
void solve(){
    sarah();
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        vector<int>number(x);
        for(int i=0;i<x;i++)cin>>number[i];
        int str[x];
        vector<string>s(x);
        int ans[x];
        for(int i=0;i<x;i++){
            cin>>str[i];
            cin>>s[i];
            for(int j=0;j<str[i];j++){
                if(s[i][j]=='D'){
                    if(number[i]==9)number[i]=0;
                    else number[i]++;
                }
                else if(s[i][j]=='U'){
                    if(number[i]==0)number[i]=9;
                    else number[i]--;
                }
            }
        }
        for(int i=0;i<x;i++){
            cout<<number[i];
            if(i!=x-1)cout<<' ';
        }
        cout<<endl;
    }

}

int main(){
    solve();
    return 0;
}
