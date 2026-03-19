//Cristiano is the GOAT
//hala madrid
#include<bits/stdc++.h>
using namespace std;
#define Achi_bhalo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
#define MAX 1000001
#define MOD 998244353
#define in insert 
string yy = "YES";
string nn = "NO";
//hehe
void color(){
    system("color 5");
}

const int MAXA = 1e6 + 5;

void solve(){
    Achi_bhalo();
    int t;
    cin>>t;
    int n;
    int div,rem;
    while(t--){
        cin>>n;
        int f=0;
        for(int b=0;b<=100;b++){
            if(n-111*b>=0&&(n-111*b)%11==0){
                f=1;
                break;
            }
        }
        if(f)cout<<yy<<endl;
        else cout<<nn<<endl;
    }
}

int main(){
    solve();
    return 0;
}