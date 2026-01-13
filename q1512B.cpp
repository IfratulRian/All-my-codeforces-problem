#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<string> a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        vector<pair<int,int>> p;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(a[i][j]=='*') p.push_back({i,j});

        int r1=p[0].first,c1=p[0].second;
        int r2=p[1].first,c2=p[1].second;

        if(r1==r2){
            int r=(r1+1<n)?r1+1:r1-1;
            a[r][c1]=a[r][c2]='*';
        }
        else if(c1==c2){
            int c=(c1+1<n)?c1+1:c1-1;
            a[r1][c]=a[r2][c]='*';
        }
        else{
            a[r1][c2]=a[r2][c1]='*';
        }

        for(auto &s:a) cout<<s<<"\n";
    }
}
