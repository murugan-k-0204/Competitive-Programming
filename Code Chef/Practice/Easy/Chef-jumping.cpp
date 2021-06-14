#include<bits/stdc++.h>
using namespace std;

int main(){
    signed long long n;
    cin>>n;
    string res="no";
    if (n%6==0 || n%6==1 || n%6==3)
        res="yes";
    cout<<res;
}
