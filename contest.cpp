//Number theory All note
//Cristiano is the GOAT
#include<bits/stdc++.h>
using namespace std;
#define O_amay_BHaloBashe_Nai() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define all(v) v.begin(),v.end()
#define pb push_back
#define MAX 1000001
#define MOD 998244353
// #define in insert 
string yy = "YES";
string nn = "NO";

const int MAXA = 1e6 + 5;
bitset<MAXA>prime;

void sieve(){
    prime.set();
    prime[0]=prime[1]=false;
    for(int i=2;i*i<MAXA;i++){
        if(prime[i]){
            for(ll j=(ll)i*i;j<MAXA;j+=i){
                prime[j]=false;
            }
        }
    }
}

int count(int n){
    int c=0;
    for(int i=2;i<=n/2;i++){
        int a=n-i;
        if(prime[i]&&prime[a]){
            c++;

        }
    }
    return c;
}

// Modulo operations
// int mod_add(int a, int b) { 
//     return (a + b) % MOD; 
// }

// int mod_sub(int a, int b) { 
//     return (a - b + MOD) % MOD; 
// }

// int mod_mul(int a, int b){
//     return (a * b) % MOD; 
// }

// int mod_pow(int a, int b){
//     int res = 1;
//     while (b)
//     {
//         if (b & 1)
//             res = mod_mul(res, a);
//         a = mod_mul(a, a);
//         b >>= 1;
//     }
//     return res;
// }
// int mod_inv(int a) {
//     return mod_pow(a, MOD - 2);
// }

// ll factorial(int number){
//     ll fact=1;
//     for(int i=2;i<=number;i++){
//         fact=(fact*i)%MOD;
//     }
//     return fact;
// }

// ll modpow(ll a,ll b,ll mod){
//     ll result=1;
//     ll A=a%mod;
//     while(b>0){
//         if(b&1) result=(result*A)%mod;
//         A=(A*A)%mod;
//         b>>=1;
//     }
//     return (ll)result;
// }

// int divisors[MAX];

// void precomputeDivisors(){
//     for(int i=1;i<MAX;i++){
//         for(int j=i;j<MAX;j+=i){
//             divisors[j]++;
//         }
//     }
// }

// ll countDigit(ll n){
//     ll sum=0;
//     while(n>0){
//         sum+=n%10;
//         n/=10;
//     }
//     return sum;
// }

//CF problem 577A
// int counNumber(int a,int b){
//     int count=0;
//     for(ll i=1;i<=a;i++){
//         for(int j=1;j<=a;j++){
//             if(i*j==b)count++;
//             if(i*j>=b)break;
//         }
//     }
//     for(ll i=1;i<=a;i++){
//         if(b%i==0&&b/i<=a)count++;
//     }
//     return count;
// }

// ll AA(ll n){
//     return (n%MOD+MOD)%MOD;
// }

// ll binpow(ll a,ll b){
//     ll res=1;
//     while(b>0){
//         if(b&1) res*=a;
//         a*=a;
//         b>>=1;
//     }
//     return res;
// }

// ll cursed4(ll k){
//     ll ans=0;
//         ll place=1;

//         while(k>0){
//             ll digit=k%9;
//             if(digit>=4) digit++;
//             ans+=digit*place;
//             place*=10;
//             k/=9;
//         }
//     return ans;
// }

// ll Divisors(ll n){
//     ll count=1;
//     for(ll i=2;i*i<=n;i++){
//         if(n%i==0){
//             ll power=0;
//             while(n%i==0){
//                 n/=i;
//                 power++;
//                 if(power>3)return 0;
//             }
//             count*=(power+1);
//         }
//     }
//     if(n>1)count*=2;
//     return count;
// }

// pair<ll,ll> B(ll a,ll b){
//     ll s=0;
//     ll ans=a;
//     for(ll i=a;i<=b;i++){
//         ll h=Divisors(i);
//         if(h>s){
//             s=h;
//             ans=i;
//         }
//     }
//     return {ans,s};
// }

// ll div(ll n){
//     ll sum=0;
//     for(ll i=1;i<=n;i++){
//             for(ll j=1;j*j<=i;j++){
//                 if(i%j==0){
//                     sum+=j;
//                     if((i/j)!=j)sum+=(i/j);
//                 }
//             }
//     }
//     return sum;
// }

// ll k=10e9+7;

void solve(){
    O_amay_BHaloBashe_Nai();
    sieve();
    int t;
    cin>>t;
    while(t--){
        
    }
}

int main(){
    solve();
    return 0;
}
