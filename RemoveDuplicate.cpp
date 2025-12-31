 #include<bits/stdc++.h>
 using namespace std;
 #define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 #define pb push_back
 #define endl '\n'
 #define s(v) v.begin(),v.end()
 #define rs(v) v.rbegin(),v.rend()
 #define ll long long

 int main()
 {
     sarah();
     int n;
     cin>>n;
     vector<int>v;
     for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.pb(a);
     }
     for(auto a:v)cout<<a<<" ";
     cout<<endl;
     sort(s(v));
     cout<<erase(unique(sort(v)))<<" "<<endl;
 }
