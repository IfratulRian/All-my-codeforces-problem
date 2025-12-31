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
    int n,m;
    cin>>n>>m;
    map<string,string>ip;
    string name,ip1;
    for(int i=0;i<n;i++){
        cin>>name>>ip1;
        ip[ip1]=name;
    }
    string cmd,cmd_ip;
    for(int i=0;i<n;i++)
    {
        cin>>cmd>>cmd_ip;
        cmd_ip.erase(cmd_ip.size()-1);
        cout<<cmd<<" "<<cmd_ip<<" "<<'#'<<ip[cmd_ip]<<endl;
    }
    return 0;
}


