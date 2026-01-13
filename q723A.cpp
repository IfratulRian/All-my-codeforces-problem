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
    vector<int>arr(3);
    for(int i=0;i<3;i++)cin>>arr[i];
    sort(all(arr));
    int diff=(arr[1]-arr[0])+(arr[2]-arr[1]);
    cout<<diff<<endl;
    return 0;
}
