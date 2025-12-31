#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
int check(string s1,string s2){
    int i;
    int count=0;
    for(i=0;i<10;i++){
        if(s1[i]!=s2[i])count++;
    }
    return count;
}
int main()
{
    optimize();
    int n;
    cin>>n;
    string str="codeforces";
    string s;
    while(n--){
        cin>>s;
        cout<<check(str,s)<<endl;
    }
    return 0;
}//yeah