#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<string, vector<int>> p; 

    p.first = "rakibul";
    p.second = {1, 2, 3, 4}; 

    cout << p.first << " " << endl;

    for (auto u : p.second) {
        cout << u << " ";
    }
    cout << endl;

    return 0;
}

