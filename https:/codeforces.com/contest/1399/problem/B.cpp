#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<=n;i++)
#define pa pair<ll,ll>
#define vec vector<ll>
#define pb push_back
#define in insert
#define mp make_pair
#define F first
#define S second
//memset(x, 0, sizeof(x))
ll inf = (ll)1e18;
ll mod = 1e9 + 7;
ll max1 = (ll)1e9;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("err.txt", "w", stderr);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll i, j, k, n, m, ct = 0, t, ans = 0;
	cin >> t;
	while (t--) {
		cin >> n;
		ll a[n], b[n]; ll min1 = inf, min2 = inf;
		for (i = 0; i < n; i++) {cin >> a[i]; min1 = min(min1, a[i]);}
		for (i = 0; i < n; i++) {cin >> b[i]; min2 = min(min2, b[i]);}
		ans = 0;
		for (i = 0; i < n; i++) {
			ll diff1 = a[i] - min1, diff2 = b[i] - min2;
			k = min(diff1, diff2);
			j = max(diff1, diff2) - k;
			ans += (j + k);
		}
		cout << ans << endl;
	}
	return 0;
}
