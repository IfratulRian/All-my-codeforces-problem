#include<bits/stdc++.h>
using namespace std;
#define sarah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    sarah();
    int b;
    cin >> b;

    ll f;
    cin >> f;          // first element

    int count = 1;
    int count1 = 1;

    while(--b){
        ll a;
        cin >> a;

        if(a >= f){
            count++;
        } else {
            count = 1;
        }

        count1 = max(count1, count);
        f = a;
    }

    cout << count1 << endl;
    return 0;
}
