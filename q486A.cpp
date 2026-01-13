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
    ll n;
    cin>>n;
    if(n%2==0)cout<<n/2<<endl;
    else if(n%2!=0)cout<<-(n/2)-1<<endl;
    return 0;
}
