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
    vector<int>arr(a);
    int c=0,bi=0,ba=0;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        if((i+1)%3==1)c+=arr[i];
        else if((i+1)%3==2)bi+=arr[i];
        else if((i+1)%3==0)ba+=arr[i];
    }
    int ans=max({c,bi,ba});
    if(ans==c)cout<<"chest"<<endl;
    else if(ans==bi)cout<<"biceps"<<endl;
    else if(ans==ba)cout<<"back"<<endl;
    return 0;
}
