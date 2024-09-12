#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p[] = {{6, 5}, {2, 3}, {4, 5}, {6, 1}, {1, 9}};
    sort(p, p + 5);
    for (auto u : p)
    {
        cout << u.first << " " << u.second << endl;
    }
}
