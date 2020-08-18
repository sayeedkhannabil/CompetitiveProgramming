#include <bits/stdc++.h>
using namespace std;

bool solution(int a[], int n);

int main()
{
	int testcase;
	cin >> testcase;
	
	while (testcase--) {
		int n;
		cin >> n;
		
		int a[n];
		
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
		if (solution(a, n)) {
			cout << "YES\n";
		}
		
		else {
			cout << "NO\n";
		}
		
	}
	
	return 0;
}


bool solution(int a[], int n) {
	if(n == 1)
		return true;
	
	sort (a, a + n);
	
	for (int i = 0; i < n - 1; i++) {
		int dif = a[i + 1] - a[i];
		
		if (dif <= 1) {}
		
		else {
			return false;
		}
	}
	
	return true;
}
