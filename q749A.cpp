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
    int i;
    int sum=0;
    if(a%2==0){
        for(i=0;;i++){
            sum+=2;
            if(sum==a)break;
        }
    }
    else{
        for(i=0;;i++){
            sum+=2;
            if(sum>a)break;
        }
    }
    int k=i+1;
    if(a%2==0)cout<<k<<endl;
    else cout<<k-1<<endl;
    if(a%2==0){
        for(i=0;i<k;i++){
            cout<<2<<' ';
        }
        cout<<endl;
    }
    else{
       for(i=0;i<k-2;i++){
            cout<<2<<' ';
        } 
        cout<<3<<endl;
    }
    return 0;
}
