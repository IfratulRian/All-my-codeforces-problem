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
    double sum=0;
    double a;
    int i=n;
    while(i--){
        cin>>a;
        sum+=a;
    }
    double div=sum/n;
    cout<<fixed<<setprecision(12)<<div<<endl;
    return 0;
}
