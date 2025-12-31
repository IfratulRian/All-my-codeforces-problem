#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    sarah();
    int b;
    cin >> b;
    while(b--){
        int a;
        cin>>a;
        if(a%2020<=a/2020)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
