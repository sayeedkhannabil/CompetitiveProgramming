#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int n;
		cin >> n;

		ll a[n];
		ll b[n];

		ll min_a= LONG_MAX;
		ll min_b = LONG_MAX;
		ll result = 0;

		for (int i = 0; i < n; i++) {
			cin >> a[i];

			if (a[i] < min_a) {
				min_a = a[i];
			}
		}
		
		for (int i = 0; i < n; i++) {
			cin >> b[i];
			
			if (b[i] < min_b) {
				min_b = b[i];
			}
		}
		

		for (int i = 0; i < n; i++) {
			int diff_a = a[i] - min_a;
			int diff_b = b[i] - min_b;
			
			int cnt = min (diff_a, diff_b) + (max (diff_a, diff_b) - min (diff_a, diff_b));
			
			result += cnt;
		}

		cout << result << endl;
		
	}	

	return 0;
}
