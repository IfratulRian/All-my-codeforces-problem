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
    int n,b,d;
    cin>>n>>b>>d;
    int sum=0,ans=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x<=b){
            sum+=x;
            if(sum>d){
                ans++;
                sum=0;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
