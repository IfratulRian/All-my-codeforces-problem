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
    int c,b;
    while(a--){
        cin>>c>>b;
        if(c==1||c==2){
            cout<<1<<endl;
            continue;
        }
        int sum=0;
        for(int i=1;i<1000;i++){
            sum+=b+2;
            if(sum>=c){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
