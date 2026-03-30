#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        int A=0,B=0,C=0;
        A+=count(s1.begin(),s1.end(),'A');
        B+=count(s1.begin(),s1.end(),'B');
        C+=count(s1.begin(),s1.end(),'C');
        A+=count(s2.begin(),s2.end(),'A');
        B+=count(s2.begin(),s2.end(),'B');
        C+=count(s2.begin(),s2.end(),'C');
        A+=count(s3.begin(),s3.end(),'A');
        B+=count(s3.begin(),s3.end(),'B');
        C+=count(s3.begin(),s3.end(),'C');
        if(A!=3)cout<<"A\n";
        else if(B!=3)cout<<"B\n";
        else if(C!=3)cout<<"C\n";
    }
}