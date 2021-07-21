#include<iostream>
using namespace std;

void solve(int n){
    if(n==0) return ;
    int a; cin>>a;
    solve(n-1);
    cout<<a<<endl;
}

int main(){
    int n; cin>>n;
    solve(n);
}
