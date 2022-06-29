#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    while (scanf("%d",&t)) {
        if (t == 0) {
            break;
        }

        bool print = false;

        int now[t];
        int pos[t];
        int prev[t] = {0};
        
        for (int i = 0; i < t; i++) {
            cin >> now[i];
            cin >> pos[i];
        }

        for (int i = 0; i < t; i++) {
            int prevPos = i + pos[i];
            
            if (prevPos < 0 || prevPos >= t) {
                cout << "-1\n";
                print = true;
                break;
            }

            else if (prev[prevPos] != 0) {
                cout << "-1\n";
                print = true;
                break;
            }

            else {
                prev[prevPos] = now[i];
            }
        }

        if (!print) {
            for (int i = 0; i < t; i++) {
                cout << prev[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}



// range should be between number of cars
