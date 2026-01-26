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
    int n;
    cin>>n;
    int a,b,c;
    while(n--){
        cin>>a>>b>>c;
        if(a+b==c)cout<<'+'<<endl;
        else if(a-b==c)cout<<'-'<<endl;
    }
    return 0;
}