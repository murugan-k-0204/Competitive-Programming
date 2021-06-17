#include <bits/stdc++.h>
using namespace std;

#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL)
#define debug(x) cout << #x << "=" << x << endl;
#define debug2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;

#define ll long long 
#define endl "\n"
#define mod 1000000007
//----------Working---Platform-------//

void solve(){
    long long n,q,a;
    cin>>n>>q;
    for (int i = 0; i < q; i++)
    {
        cin>>a;
        if(a>n+1 && a <= n*3)
        {
            if(a>n*2+1)
                cout<<(n*2)-(a-n)+1<<endl;
            else
                cout<<a-(n+1)<<endl;
        }
        else
            cout<<0<<endl;
    }
    
}

signed main(){
    fast();
    ll t =1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
