#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<string, int>> v;
    v.push_back({"rakibul", 5});
    v.push_back({"borsha", 3});
    v.push_back({"borsha", 3});
    v.push_back({"borsha", 3});
    v.push_back({"reshed", 1});
    v.push_back({"turjo", 9});
    v.push_back({"reshed", 1});

    sort(v.begin(), v.end());
    int sz=unique(v.begin(),v.end())-v.begin();

    for(int i=0;i<sz;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
