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
    vector<int>arr(3);
    while(n--){
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(all(arr));
        int sum=arr[0]+arr[1];
        if(sum==arr[2])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}