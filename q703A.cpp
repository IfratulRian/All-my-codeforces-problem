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
    int flag=0;
    int count=0;
    int a,b;
    while(n--){
        cin>>a>>b;
        if(a>b)count++;
        else if(b>a)flag++;
    }
    if(count>flag)cout<<"Mishka"<<endl;
    else if(count<flag) cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;
    return 0;
}