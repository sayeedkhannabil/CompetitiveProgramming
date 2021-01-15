#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;

    char c[5] = {'a', 'b', 'c', 'd', 'e'};

    for (int i = 0; i < n; i++) {
        cout << c[(2 + i) % 5] << ' ';
    }

    cout << endl;

    return 0;

}
