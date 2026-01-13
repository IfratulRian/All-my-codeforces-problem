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
    int n;
    cin>>n;
    int x;
    int maxnumber,minnumber,max=INT_MIN,min=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>x;
        if(max<x){
            max=x;
            maxnumber=i+1;
        }
        if(min>=x){
            min=x;
            minnumber=i+1;
        }
    }
    int ans=(maxnumber-1)+(n-minnumber);
    if(maxnumber>minnumber)ans--;
    cout<<ans<<endl;
    return 0;
}
