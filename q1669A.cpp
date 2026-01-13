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
    int rating;
    while(n--){
        cin>>rating;
        if(rating<=1399)cout<<"Division 4"<<endl;
        else if(rating<=1599)cout<<"Division 3"<<endl;
        else if(rating<=1899)cout<<"Division 2"<<endl;
        else if(rating>=1900) cout<<"Division 1"<<endl;
    }
    return 0;
}