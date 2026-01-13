#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back

int main(){
    optimize();
    int a;
    cin>>a;
    if(a%4==1)cout<<8<<endl;
    else if(a%4==2)cout<<4<<endl;
    else if(a%4==3)cout<<2<<endl;
    else if(a%4==0&&a!=0)cout<<6<<endl;
    else if(a==0)cout<<1<<endl;
    return 0;
}
