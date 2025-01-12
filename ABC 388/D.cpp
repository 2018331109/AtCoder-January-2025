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

#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int>a(n+1, 0), pre(n+1, 0), ans(n, 0);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        int total=a[i]+pre[i];
        pre[i+1]+=pre[i];
        if(total>0){
            pre[i+1]+=1;
            pre[min(n, i+total+1)]-=1;
        }
        ans[i]=total-min(total, n-i-1);
    }
    for(auto it:ans) cout<<it<<" ";
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

