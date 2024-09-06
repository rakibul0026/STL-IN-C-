//2D vector in STL

#include <bits/stdc++.h>
using namespace std;

int a[2][2];

int main()
{
    vector<vector<int>> v;

    vector<int> a1 = {2, 3, 4};
    vector<int> a2 = {2, 3, 4, 5, 6};

    v.push_back(a1);
    v.push_back(a2);

    for (auto u : v)
    {
     for (auto g :u) cout << g << " ";
     cout << endl;
    }

    return 0;
}

output:->
2 3 4 
2 3 4 5 6 
