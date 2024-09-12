#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int cnt[1000] = {0};
    vector<int> v = {2, 3, 3, 1, 5, 2};

    
    for (int i = 0; i < v.size(); i++) {
        cnt[v[i]]++;
    }

    
    for (int i = 0; i < 1000; i++) {
        if (cnt[i] > 0) {
            cout << "Element " << i << " occurs " << cnt[i] << " times." << endl;
        }
    }

    return 0;
}
