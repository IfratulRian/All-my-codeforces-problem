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
    vector<int> arr(4);
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    sort(all(arr));
    arr.erase(unique(all(arr)),arr.end());
    int s=4-arr.size();
    cout<<s<<endl;
    return 0;
}
