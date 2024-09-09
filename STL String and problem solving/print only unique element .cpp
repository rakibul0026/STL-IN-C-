#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v = {"fouat", "minhad", "jobayer", "rifat", "rana", "fouat", "minhad"};
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end()); // Erase the duplicates

    int sz = v.size();

    cout << sz << endl;
    for(int i = 0; i < sz; i++) 
        cout << v[i] << endl;

    return 0;
}
