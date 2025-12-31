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
    int t;
    cin>>t;
    map<string,int>m;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        if(n==1){
            int a;
            cin>>a;
            m[s]+=a;
        }
        else if(n==2){
            m.erase(s);
        }
        else{
            cout<<m[s]<<endl;
        }
    }
    return 0;
}

