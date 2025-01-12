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

    int result = 0;

    for (int i = 0; i < N; ++i) {
        int low = i + 1, high = N, index = N;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (A[mid] >= 2 * A[i]) {
                index = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        result += N - index;
    }

    cout << result << endl;
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

