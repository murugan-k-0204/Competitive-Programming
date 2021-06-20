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
    int n,q;
    cin>>n>>q;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    sort(arr,arr+n);
    

    for (int i = 0; i < q; i++)
    {
        int a;
        string ans;
        cin>>a;
        int index = lower_bound(arr,arr+n,a) - arr ;
        if(index==0){
            if(n%2==0) ans="POSITIVE";
            else ans="NEGATIVE";
        }
        else if(index==n)
            ans="POSITIVE";
        else if(arr[index]==a)
            ans="0";
        else if((n-index)%2==0)
            ans="POSITIVE";
        else ans="NEGATIVE";

            

        // for (int num: arr)
        // {
        //     if(num==a){
        //         ans=0;
        //         break;
        //     }
        //     else if(a-num<0)
        //         ans*= -1;
        //     else ans*=1;
        // }
        // if(ans==0) cout<<0<<endl;
        // else if(ans==1) cout<<"POSITIVE"<<endl;
        // else cout<<"NEGATIVE"<<endl;
        cout<<ans<<endl;
        
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
