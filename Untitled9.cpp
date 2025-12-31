#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define ll long long
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.end()

int main()
{
    sarah();
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int x;
    cin>>x;
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+x);
    if(a>0&&b<=v.size()&&a<b)
        v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}


