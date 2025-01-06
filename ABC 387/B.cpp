#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ff first
#define ss second
const int mod = 1e9+7;
const int N = 200005;
using namespace std;

void solve() {
    int X, sum = 0;
    cin >> X;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (i * j != X) sum += i * j;
        }
    }
    cout << sum << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    //cin >> t;
    while (t--) solve();

    return 0;
}

