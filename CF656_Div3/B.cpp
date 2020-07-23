#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		
		int len = n * 2;
		
		int a[len + 1];
		memset(a, 0, sizeof(a));
		
		for (int i = 0; i < len; i++) {
			int temp;
			cin >> temp;
			
			if(a[temp] == 0) {
				cout << temp << " ";
				a[temp]++;
			}
			
		}
		
		cout << endl;
	}
	
	return 0;
}
