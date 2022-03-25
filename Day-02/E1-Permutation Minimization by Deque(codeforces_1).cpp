#include<bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0)
#define ll long long
const ll mod = 1000000007; //10^9+7

#ifdef ONLINE_JUDGE
#define debug(...) void(0);
#else
#include "debug.hpp"
#endif

void heySaksham() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
}

void problem_solver()
{
	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];

	deque<int> ans;
	ans.push_back(v[0]);

	for (int i = 1; i < n; i++) {
		if (v[i] < ans[0]) {
			ans.push_front(v[i]);
		}
		else {
			ans.push_back(v[i]);
		}
	}


	for (int i = 0; i < n; i++)cout << ans[i] << " ";
}

int32_t main() {
	heySaksham();
	fast;
	ll t = 1;
	cin >> t;
	while (t--)
	{
		problem_solver();
		cout << endl;
	}

	return 0;
}