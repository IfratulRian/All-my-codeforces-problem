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
    int  week[7];
    int sum=0;
    int first;
    for(int i=0;i<7;i++){
        cin>>week[i];
    }
    int i=0;
    while(a>0){
        a-=week[i];
        i=(i+1)%7;
    }
    if(i==0) cout<<7<<endl;
    else cout<<i<<endl;
    return 0;
}