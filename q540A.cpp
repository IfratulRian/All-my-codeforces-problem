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
    string s1,s2;
    int sum=0;
    cin>>s1>>s2;
    for(int i=0;i<n;i++){
        int rem1=s1[i]-'0';
        int rem2=s2[i]-'0';
        int dif=abs(rem1-rem2);
        sum+=min(dif,10-dif);
    }
    cout<<sum<<endl;
    return 0;
}
