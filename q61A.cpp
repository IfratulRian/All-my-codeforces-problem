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
    string a,b;
    cin>>a>>b;
    string temp;
    for(int i=0;i<a.size();i++){
        if(a[i]==b[i])cout<<0;
        else cout<<1;
    }
    cout<<endl;
    return 0;
}
