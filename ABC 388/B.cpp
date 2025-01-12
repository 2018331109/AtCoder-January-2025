#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ff first
#define ss second
const int mod = 1e9+7;
const int N = 200005;

void solve() {
    int N, D;
    cin >> N >> D;
    vector<pair<int, int>> snakes(N);
    for (int i = 0; i < N; i++) {
        cin >> snakes[i].first >> snakes[i].second;
    }

    for (int k = 1; k <= D; k++) {
        int max_weight = 0;
        for (int i = 0; i < N; i++) {
            int weight = snakes[i].first * (snakes[i].second + k);
            if (weight > max_weight) {
                max_weight = weight;
            }
        }
        cout << max_weight << endl;
    }
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

