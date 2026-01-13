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
    string num;
    while(n--){
        cin>>num;
        int sum1=0,sum2=0;
        for(int i=0;i<num.size();i++){
            if(i<3){
                sum1+=num[i];
            }
            else sum2+=num[i];
        }
        if(sum1==sum2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}