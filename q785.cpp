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
    string a="Tetrahedron";
    string b="Cube";
    string c="Octahedron";
    string d="Dodecahedron";
    string e="Icosahedron";
    int n;
    cin>>n;
    int sum=0;
    while(n--){
        string str;
        cin>>str;
        if(str==a)sum+=4;
        else if(str==b)sum+=6;
        else if(str==c)sum+=8;
        else if(str==d)sum+=12;
        else if(str==e)sum+=20;
    }
    cout<<sum<<endl;
    return 0;
}