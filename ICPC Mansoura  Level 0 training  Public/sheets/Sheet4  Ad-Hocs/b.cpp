#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {

    int n ,  q ;
    cin >> n >> q ;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
    }

    while(q--)
    {
        int l , r , x ;
        cin >> l >> r >> x ;
        l--,r--;
        int count{};
        for(int i = l ; i <=r ; i++)
        {
              if(v[i] == x)
              {
                 count++;
              }
        }
        cout << count << '\n';
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1 ;
    //  cin >> tc ;
    for (int i = 1; i <=tc ; ++i) {
        solve();

    }

    return 1 - 1 ;

}
 