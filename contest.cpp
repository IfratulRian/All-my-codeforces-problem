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
    ll a;
    cin >> a;
    ll count = 0;

    for(ll i = a; i > 0; i /= 10){
        if(i % 10 == 4 || i % 10 == 7){
            count++;
        }
    }

    if(count == 4 || count == 7) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
