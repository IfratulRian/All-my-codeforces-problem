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
    int count=0;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    int total=0;
    for(int i=0;i<n;i++){
        if(x[i]>0)count+=x[i];
        else if(x[i]==-1){
            if(count>0)count--;
            else total++;
        }
    }
    cout<<total<<endl;
    return 0;
}
