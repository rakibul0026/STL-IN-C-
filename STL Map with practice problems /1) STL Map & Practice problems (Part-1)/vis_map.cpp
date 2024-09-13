
#include <bits/stdc++.h>
using namespace std;
string d[123];

int main()
{
    map<int ,bool>vis;
    vector<int>v={2,2,1,1,3};
    for(auto u:v) vis[u]=1;

    for(auto u: vis) cout<<u.first<<" "<<u.second<<endl;

    return 0;
}
