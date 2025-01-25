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

void solve(){
    vector<int> A(5);
    for (int i = 0; i < 5; i++) cin >> A[i];

    // Check all adjacent pairs for a single swap possibility
    for (int i = 0; i < 4; i++) {
        swap(A[i], A[i + 1]);
        if (is_sorted(A.begin(), A.end())) {
            yes;
            return;
        }
        swap(A[i], A[i + 1]); // Revert back the swap
    }
    no;
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

