#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ll long long
#define endl '\n'
#define a(v) v.begin(),v.end
#define ra(v) v.rbegin(),v.rend()
int main()
{
    sarah();
    int n;
    cin>>n;
    cin.ignore();
    map<string,int>f;
    for(int i=0;i<n;i++){
            string s;
        getline(cin,s);
        if(f[s]==0){
            cout<<"OK"<<endl;
        }
        else cout<<s<<f[s]<<endl;
        f[s]++;
    }

}
