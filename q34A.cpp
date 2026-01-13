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
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mn=INT_MAX;
    int x=1,y=n;
    for(int i=1;i<n;i++){
        int dif=abs(arr[i]-arr[i-1]);
        if(dif<mn){
            mn=dif;
            x=i;
            y=i+1;
        }
    }
    int dif=abs(arr[0]-arr[n-1]);
    if(dif<mn){
        x=1;
        y=n;
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}
