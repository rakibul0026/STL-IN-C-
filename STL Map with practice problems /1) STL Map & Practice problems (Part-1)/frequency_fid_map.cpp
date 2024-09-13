#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<long long>v = {1,1010101010101,234233334221,1010101010101};
    map<long long,int> cnt;

    for(int i=0;i<v.size();i++){
        cnt[v[i]]++;
    }

    
    cout<<cnt[1010101010101]<<endl;
      return 0;

}
