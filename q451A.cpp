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
    int arr[4];
    while(n--){
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
        int count=0;
        for(int i=1;i<4;i++){
            if(arr[0]<arr[i])count++;
        }
        cout<<count<<endl;
    }
    return 0;
}