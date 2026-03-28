#include<bits/stdc++.h>
using namespace std;
#define haras() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define endl '\n'
#define aa(v) v.begin(),v.end()
#define ss(v) v.rbegin(),v.rend()
#define ll long long
#define in insert 
string yy = "YES";
string nn = "NO";

void file()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

void solve()
{
        haras();
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;

            int a=-1,b=-1,c=-1;
            int temp=n;

            for(int i=2;i*i<=temp;i++){
                if(temp%i==0){
                    a=i;
                    temp/=i;
                    break;
                }
            }

            if(a==-1){
                cout<<nn<<endl;
                continue;
            }

            for(int i=a+1;i*i<=temp;i++){
                if(temp%i==0){
                    b=i;
                    c=temp/i;
                    break;
                }
            }

            if(b==-1 || c<=1 || a==b || b==c || a==c){
                cout<<nn<<endl;
            }
            else{
                cout<<yy<<endl;
                cout<<a<<" "<<b<<" "<<c<<endl;
            }
        }
}

int main()
{
    solve();
}
