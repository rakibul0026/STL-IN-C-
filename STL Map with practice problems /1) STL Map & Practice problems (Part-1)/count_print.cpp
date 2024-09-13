#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<long long> v = {1, 1010101010101, 234233334221, 1010101010101};
    map<long long, int> cnt;

    for (auto u : v)
        cnt[u]++;

    for (auto u : cnt)
    {
        cout << u.first << " " << u.second << endl;
    }
    return 0;
}
