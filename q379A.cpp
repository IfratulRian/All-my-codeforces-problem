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
    int count=0,s=0;
    while(a>0){
        a--;
        count++;
        s++;
        if(s>=b){
            s-=b;
            a++;
        }
    }
    cout<<count<<endl;
    return 0;
}