#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	
	int testcase;
	cin >> testcase;
	
	while (testcase--) {
		int n;
		cin >> n;
		
		int a[n];
		
		for (int i = 0; i < n; i++) {
			cin >> a[n];
		}
		
		int left = 0;
		int right = n - 1;
		
		int curr = -1;
		
		while (left < right) {
			if (curr == -1) {
				if (a[left] < a[right]) {
					curr = a[left];
					left++;
				}
				
				else {
					curr = a[right];
					right--;
				}
			}
			
			else {
				
				if (a[left] < a[right]) {
					if (curr <= a[left]) {
						curr = a[left];
						left++;
					}
					
					else if (curr <= a[right]) {
						curr = a[right];
						right--;
					}
					
					else {
						break;	
					}
					
				}
				
				else {
					if (curr <= a[right]) {
						curr = a[right];
						right--;
					}
					
					else if (curr <= a[left]) {
						curr = a[left];
						left++;
					}
					
					else {
						break;
					}
					
				}
				
			}
		}
		
		cout << right - left << endl;
	}
	
	return 0;
}
