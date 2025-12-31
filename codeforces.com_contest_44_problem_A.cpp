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
     vector<pair<string,string>>v(n);
     for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;

     }
     sort(s(v));
     int sz=unique(s(v))-v.begin();
     cout<<sz<<endl;
 }
