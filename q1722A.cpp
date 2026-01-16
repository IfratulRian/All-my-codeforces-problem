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
    int a;
    cin>>a;
    ll sum=0;
    ll used=0;
    for(int i=1;;i++){
        used+=i*(i+1)/2;
        if(used>a)break;
        sum++;
    }
    cout<<sum<<endl;
    return 0;
}