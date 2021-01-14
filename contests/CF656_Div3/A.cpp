#include <bits/stdc++.h>
using namespace std;

int main()
{
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int a[3];
		
		for (int i = 0; i < 3; i++) {
			cin >> a[i];
		}

		sort(a, a + 3);

		if (a[1] != a[2])
			cout << "NO\n";

		else
			cout << "YES\n" << a[0] << " " << a[2] << " " << a[0] << endl;

	}

	return 0;
}
