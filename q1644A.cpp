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
    string s;
    while(a--){
        int R=0,G=0,B=0,r=0,b=0,g=0;
        cin>>s;
        for(int i=0;i<6;i++){
            if(s[i]=='r')r=1;
            if(s[i]=='b')b=1;
            if(s[i]=='g')g=1;
            if(s[i]=='B'&&b==1)B=1;
            if(s[i]=='G'&&g==1)G=1;
            if(s[i]=='R'&&r==1)R=1;
        }
        if(B==1&&G==1&&R==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
