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
    int a;
    while(n--){
        cin>>a;
        int rem=a%10;
        int sum;
        if(0<a&&a<10){
            sum=((rem-1)*10)+1;
        }
        else if(10<a&&a<100){
            sum=((rem-1)*10)+3;
        }
        else if(100<a&&a<1000){
            sum=((rem-1)*10)+6;
        }
        else if(1000<a&&a<10000){
            sum=((rem-1)*10)+10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
