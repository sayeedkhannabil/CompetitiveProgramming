#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--) {
		int x, y, n, r;
		cin >> x >> y >> n >> r;

		int base = n * x;
		int normal = n;
		int premium = 0;

		if (base > r){
			cout << -1 << endl;
		}

		else{
			for (int i = 0; i <= n; i++) {
				int temp1 = n-i;
				int temp2 = i;

				if (((temp1*x)+(temp2*y)) <= r) {
					normal = temp1;
					premium = temp2;
				}

				else{
					break;
				}
			}

			cout << normal << " " << premium << endl;
		}
	}


	return 0;
}