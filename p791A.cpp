#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
int year(int a,int b){
    int i=0;
    while(a<=b){
        a*=3;
        b*=2;
        i++;
    }
    return i;
}
int main()
{
    sarah();
    int a,b;
    cin>>a>>b;
    cout<<year(a,b)<<endl;
    return 0;
}