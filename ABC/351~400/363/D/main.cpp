#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> memo({1ll, 9ll, 9ll, 90ll, 90ll, 900ll, 900ll, 9000ll, 9000ll, 90000ll, 90000ll, 900000ll, 900000ll, 9000000ll, 9000000ll, 90000000ll, 90000000ll, 900000000ll, 900000000ll, 9000000000ll, 9000000000ll, 90000000000ll, 90000000000ll, 900000000000ll, 900000000000ll, 9000000000000ll, 9000000000000ll, 90000000000000ll, 90000000000000ll, 900000000000000ll, 900000000000000ll, 9000000000000000ll, 9000000000000000ll, 90000000000000000ll, 90000000000000000ll, 900000000000000000ll});
vector<ll> memo2({1, 10, 10ll, 100ll, 100ll, 1000ll, 1000ll, 10000ll, 10000ll, 100000ll, 100000ll, 1000000ll, 1000000ll, 10000000ll, 10000000ll, 100000000ll, 100000000ll, 1000000000ll, 1000000000ll, 10000000000ll, 10000000000ll, 100000000000ll, 100000000000ll, 1000000000000ll, 1000000000000ll, 10000000000000ll, 10000000000000ll, 100000000000000ll, 100000000000000ll, 1000000000000000ll, 1000000000000000ll, 10000000000000000ll, 10000000000000000ll, 100000000000000000ll, 100000000000000000ll});

int main()
{
	ll N;
	cin >> N;
	vector<ll> acc(memo.size());
	acc[0] = 1;
	for (ll i = 1; i < memo.size(); ++i)
		acc[i] = acc[i - 1] + memo[i];
	if (N == 1)
	{
		cout << 0 << endl;
		return 0;
	}
	auto it = lower_bound(acc.begin(), acc.end(), N);
	ll prefix = N - memo2[it - acc.begin() - 1];
	string ans = to_string(prefix);
	ll a = ans.size() - 1 - (it - acc.begin()) % 2;
	for (ll i = a; i >= 0; --i)
		ans += ans[i];
	cout << ans << endl;
}
