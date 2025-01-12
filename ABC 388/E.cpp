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
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int i = 0, j = N / 2, K = 0;  // Two pointers: i for smaller mochi, j for larger mochi
    while (i < N / 2 && j < N) {
        if (A[i] * 2 <= A[j]) {
            // A[i] can be placed on top of A[j]
            K++;
            i++;
            j++;
        } else {
            // Move j to try a larger mochi for pairing
            j++;
        }
    }

    cout << K << endl;
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

