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
    int n,h;
    cin>>n>>h;
    int a;
    int sum=0;
    while(n--){
        cin>>a;
        if(a>h)sum+=2;
        else sum++;
    }
    cout<<sum<<endl;
    return 0;
}
