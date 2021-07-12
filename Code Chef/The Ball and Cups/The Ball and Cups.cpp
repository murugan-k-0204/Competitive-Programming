#include <bits/stdc++.h>
using namespace std;

#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define debug(x) cout << #x << "=" << x << endl;
#define debug2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define int long long
#define endl "\n"
#define mod 1000000007

//----------Working---Platform-------//
void solve()
{
    int n, ball, q, l ,r, dif;
    cin>>n>>ball>>q;
    for (int i = 0; i < q; i++)
    {
        cin>>l>>r;
        if(ball>=l && ball<=r)
            ball = r - (ball-l);
        // debug(ball)
    }
    cout<<ball<<endl;
    
}
signed main() 
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
