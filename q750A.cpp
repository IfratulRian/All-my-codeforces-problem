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
    int a,b;
    cin>>a>>b;
    int time=240-b;
    int i;
    int div;
    for(i=1;i<=a;i++){
        if(time>=5*i){
        div=time-(5*i);
        time=div;
        }
        else break;
    }
    cout<<i-1<<endl;
    return 0;
}
