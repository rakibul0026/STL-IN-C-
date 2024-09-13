#include <bits/stdc++.h>
using namespace std;

int main() {
    // Initialize the map to store counts of each name
    map<string, int> id;

    // Vector of names
    vector<string> v = {"momo", "sharif", "amin", "amin"};

    // Count occurrences of each name
    for (const auto& name : v) {
        id[name]++;
    }

    // Output the counts for each name
    for (const auto& pair : id) {
        cout << pair.first << " appears " << pair.second << " times." << endl;
    }

    return 0;
}
