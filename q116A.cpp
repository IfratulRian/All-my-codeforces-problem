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
    int t;
    cin>>t;
    int x,y;
    int sum=0;
    int temp=INT_MIN;
    while(t--){
        cin>>x>>y;
        sum+=y-x;
        if(temp<sum){
            temp=sum;
        }
    }
    cout<<temp<<endl;
    return 0;
}
