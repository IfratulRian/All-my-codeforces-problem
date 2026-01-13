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
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int t1=(k*l)/nl;
    int t2=c*d;
    int t3=p/np;
    int div=min({t1,t2,t3})/n;
    cout<<div<<endl;
    return 0;
}
