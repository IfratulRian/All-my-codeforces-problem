#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back

int main()
{
    sarah();
    string str;
    cin>>str;
    int count=1;
    for(int i=0;i<str.size()-1;i++){
        if(str[i]==str[i+1]){
            count++;
            if(count==7){
            cout<<"YES"<<endl;
            return 0;
            }
        }
        else count=1;
    }
    cout<<"NO"<<endl;
    return 0;
}