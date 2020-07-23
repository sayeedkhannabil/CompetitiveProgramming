#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	int n;
	cin >> n;
	
	vector<int> v;
	vector<int> c;
	
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	
	auto left = v.begin();
	auto right = v.end();
	
	for (int i = 0; i < n; i++) {
		if (c.size() == 0) {
			if (*left < *right) {
				c.push_back(*left);
				left++;
			}
			
			else {
				c.push_back(*right);
				right--;
			}
		}
		
		auto temp = c.end();
		
		if (*temp > min(*left, *right))
			break;
			
		else {
			if (*left < *right) {
				c.push_back(*left);
				left++;
			}
			
			else {
				c.push_back(*right);
				right--;
			}
		}
	}
	
	cout << v.size() - c.size() << endl;	
	
	return 0;
	
}
